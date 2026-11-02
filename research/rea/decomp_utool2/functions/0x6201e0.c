// rea decompile_all
// name: FUN_006201e0
// address: 0x6201e0
// body: available
// range: 0x6201e0-0x6202dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_006201e0(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int *in_ECX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int local_202c;
  undefined8 local_2028;
  int *local_2020;
  int *local_201c;
  int local_2014;
  undefined1 local_2010 [8196];
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&local_202c;
  local_2020 = param_1;
  if ((param_3 < 1) && (param_3 < 0)) {
    param_2 = 0xffffffff;
    param_3 = 0x7fffffff;
  }
  local_2028 = 0;
  if ((param_3 < 0) || ((param_3 < 1 && (param_2 == 0)))) {
    local_2028._4_4_ = 0;
    iVar2 = local_2028._4_4_;
  }
  else {
    local_202c = 0;
    local_2028 = 0;
    local_201c = in_ECX;
    do {
      uVar3 = param_2;
      local_2014 = param_3;
      if (param_3 < 0) goto LAB_00620277;
      uVar4 = param_2;
      if ((param_3 < 1) && (param_2 < 0x2001)) goto LAB_00620277;
      do {
        param_2 = 0x2000;
        local_2014 = 0;
        uVar3 = uVar4;
LAB_00620277:
        uVar1 = (**(code **)(*local_2020 + 0xc))(local_2010,param_2);
        iVar2 = local_202c;
        if ((int)uVar1 < 1) goto LAB_006202ba;
        (**(code **)(*local_201c + 0x10))(local_2010,uVar1);
        uVar4 = uVar3 - uVar1;
        param_3 = (param_3 - ((int)uVar1 >> 0x1f)) - (uint)(uVar3 < uVar1);
        bVar5 = CARRY4((uint)local_2028,uVar1);
        local_2028 = CONCAT44(local_2028._4_4_,(uint)local_2028 + uVar1);
        iVar2 = local_202c + ((int)uVar1 >> 0x1f) + (uint)bVar5;
        local_202c = iVar2;
      } while (0 < param_3);
    } while ((-1 < param_3) && (param_2 = uVar4, uVar4 != 0));
  }
LAB_006202ba:
  __security_check_cookie(local_c ^ (uint)&local_202c,iVar2);
  return;
}

