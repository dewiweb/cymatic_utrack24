// rea decompile_all
// name: FUN_0046f13f
// address: 0x46f13f
// body: available
// range: 0x46f13f-0x46f2a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046f13f(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,double param_6)

{
  char *_Format;
  int iVar1;
  int iVar2;
  undefined1 auStack_9c [7];
  undefined1 local_95;
  uint local_94;
  uint local_90;
  undefined4 local_8c;
  int local_88;
  char local_80 [116];
  uint local_c;
  
  local_c = DAT_00955fd4 ^ (uint)auStack_9c;
  iVar2 = *(int *)(param_4 + 0x14);
  local_8c = param_1;
  if ((iVar2 < 1) && ((*(uint *)(param_4 + 0x10) & 0x2000) == 0)) {
    iVar2 = 6;
  }
  local_88 = 0x24;
  if (iVar2 < 0x25) {
    local_88 = iVar2;
  }
  iVar2 = iVar2 - local_88;
  local_94 = 0;
  local_90 = 0;
  if ((*(uint *)(param_4 + 0x10) & 0x3000) == 0x2000) {
    local_95 = param_6 < 0.0;
    if ((bool)local_95) {
      param_6 = -param_6;
    }
    if (!NAN(param_6) && 1e+35 < param_6 != (param_6 == 1e+35)) {
      do {
        if (4999 < local_94) break;
        param_6 = param_6 / 10000000000.0;
        local_94 = local_94 + 10;
      } while (1e+35 < param_6 != (param_6 == 1e+35));
    }
    if (0.0 < param_6) {
      for (; ((9 < iVar2 && (param_6 <= 1e-35)) && (local_90 < 5000)); local_90 = local_90 + 10) {
        iVar2 = iVar2 + -10;
        param_6 = param_6 * 10000000000.0;
      }
    }
    if ((bool)local_95) {
      param_6 = -param_6;
    }
  }
  _Format = (char *)FUN_0046f4f0(local_88,param_6,param_2,param_3);
  iVar1 = _sprintf_s(local_80,0x6c,_Format);
  FUN_0046f54c(local_8c,param_5,local_80,local_94,local_90,iVar2,iVar1);
  __security_check_cookie(local_c ^ (uint)auStack_9c);
  return;
}

