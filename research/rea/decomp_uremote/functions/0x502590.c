// rea decompile_all
// name: FUN_00502590
// address: 0x502590
// body: available
// range: 0x502590-0x5026c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0050261a) */

void FUN_00502590(double param_1,byte param_2)

{
  char cVar1;
  longlong lVar2;
  char *local_68;
  char local_64 [79];
  char local_15;
  uint local_14;
  ushort local_10;
  longlong local_c;
  
  local_14 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  local_10 = (ushort)param_2;
  FUN_0047014b(0,0x40240000,local_10);
  _fabs(param_1);
  lVar2 = FUN_005b3fe6();
  local_68 = &local_15;
  local_15 = '\0';
  while ((local_c = lVar2, local_64 < local_68 && ((-1 < (short)local_10 || (0 < lVar2))))) {
    if (local_10 == 0) {
      local_68 = local_68 + -1;
      *local_68 = '.';
    }
    local_68 = local_68 + -1;
    cVar1 = __allrem(local_c,10,0);
    *local_68 = cVar1 + '0';
    lVar2 = __alldiv(local_c,10,0);
    local_10 = local_10 - 1;
  }
  if (param_1 < 0.0) {
    local_68 = local_68 + -1;
    *local_68 = '-';
  }
  FUN_00501fb0(local_68,&local_15 + -(int)local_68);
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

