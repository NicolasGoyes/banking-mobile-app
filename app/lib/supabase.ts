import 'react-native-url-polyfill/auto';
import {createClient} from '@supabase/supabase-js';

const SUPABASE_URL = 'https://smkysqdwifhnhjjmoxwe.supabase.co';
const SUPABASE_KEY = 'eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBhYmFzZSIsInJlZiI6InNta3lzcWR3aWZobmhqam1veHdlIiwicm9sZSI6ImFub24iLCJpYXQiOjE3NjQxODE2ODYsImV4cCI6MjA3OTc1NzY4Nn0.CbbPQqLeQoFASrroYlvcA_BjRSz9SxMaqOGeqQ8qR2w';

export const supabase = createClient(SUPABASE_URL, SUPABASE_KEY);