// rea decompile_all
// name: FUN_005eeac0
// address: 0x5eeac0
// body: available
// range: 0x5eeac0-0x5eeca7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005eeac0(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,uint param_7,uint param_8,undefined4 param_9,int param_10,
                 undefined4 param_11,undefined4 *param_12)

{
  int *piVar1;
  int iVar2;
  size_t _Size;
  void *_Dst;
  int in_ECX;
  uint *puVar3;
  uint in_EDX;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  uVar5 = 0;
  local_8 = 0;
  local_c = 0;
  for (; (param_8 != 0 && (param_3 + param_4 >> ((byte)param_8 & 0x1f) <= param_4));
      param_8 = param_8 - 1) {
  }
  if (param_8 < param_7) {
    param_7 = param_8;
  }
  local_14 = in_EDX;
  local_10 = in_ECX;
  (**(code **)(in_ECX + 0x1c28))();
  if (param_10 != 0) {
    FUN_005ee630(param_3,param_4,param_7,param_8);
  }
  for (; (int)param_7 <= (int)param_8; param_8 = param_8 - 1) {
    iVar2 = 0x2dc4;
    if (local_8 == 0) {
      iVar2 = 0x2dd0;
    }
    iVar2 = FUN_005ee370(param_3,param_4,param_5,param_6,0x2dd0,param_8,param_10,iVar2 + local_10,
                         &local_14);
    if (iVar2 == 0) break;
    if ((uVar5 == 0) || (local_14 < uVar5)) {
      local_8 = (uint)(local_8 == 0);
      uVar5 = local_14;
      local_c = param_8;
    }
  }
  uVar6 = 6;
  if (6 < local_c) {
    uVar6 = local_c;
  }
  piVar1 = (int *)param_12[2];
  param_12[1] = local_c;
  if ((uint)piVar1[2] < uVar6) {
    _Size = (1 << ((byte)uVar6 & 0x1f)) << 2;
    iVar2 = FUN_004c553b(*piVar1,_Size);
    *piVar1 = iVar2;
    if (iVar2 != 0) {
      _Dst = (void *)FUN_004c553b(piVar1[1],_Size);
      piVar1[1] = (int)_Dst;
      if (_Dst != (void *)0x0) {
        _memset(_Dst,0,_Size);
        piVar1[2] = uVar6;
      }
    }
  }
  uVar6 = 1 << ((byte)local_c & 0x1f);
  iVar2 = local_10 + local_8 * 0xc;
  FUN_004c2c30(*piVar1,*(undefined4 *)(iVar2 + 0x2dc4),uVar6 * 4);
  if (param_10 != 0) {
    FUN_004c2c30(piVar1[1],*(undefined4 *)(iVar2 + 0x2dc8),uVar6 * 4);
  }
  uVar4 = 0;
  if (uVar6 != 0) {
    puVar3 = (uint *)*piVar1;
    while (*puVar3 < 0xf) {
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
      if (uVar6 <= uVar4) {
        return uVar5;
      }
    }
    *param_12 = 1;
  }
  return uVar5;
}

