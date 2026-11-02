// rea decompile_all
// name: FUN_00466f42
// address: 0x466f42
// body: available
// range: 0x466f42-0x46700e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00466f42(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *in_ECX;
  bool bVar4;
  undefined1 auStack_2024 [4];
  uint local_2020;
  int local_201c;
  int *local_2014;
  undefined1 local_2010 [8196];
  uint local_c;
  
  local_c = DAT_00955fd4 ^ (uint)auStack_2024;
  local_2014 = param_1;
  if ((param_3 < 1) && (param_3 < 0)) {
    param_2 = 0xffffffff;
    param_3 = 0x7fffffff;
  }
  local_2020 = 0;
  local_201c = 0;
  if ((-1 < param_3) && ((0 < param_3 || (param_2 != 0)))) {
    while( true ) {
      iVar1 = *local_2014;
      uVar2 = FUN_004706ab(param_2,param_3,0x2000,0);
      uVar3 = (**(code **)(iVar1 + 0xc))(local_2010,uVar2);
      if ((int)uVar3 < 1) break;
      (**(code **)(*in_ECX + 0x10))(local_2010,uVar3);
      bVar4 = param_2 < uVar3;
      param_2 = param_2 - uVar3;
      param_3 = (param_3 - ((int)uVar3 >> 0x1f)) - (uint)bVar4;
      bVar4 = CARRY4(local_2020,uVar3);
      local_2020 = local_2020 + uVar3;
      local_201c = local_201c + ((int)uVar3 >> 0x1f) + (uint)bVar4;
      if ((param_3 < 1) && ((param_3 < 0 || (param_2 == 0)))) break;
    }
  }
  __security_check_cookie(local_c ^ (uint)auStack_2024,local_201c);
  return;
}

