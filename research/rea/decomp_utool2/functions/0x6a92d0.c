// rea decompile_all
// name: FUN_006a92d0
// address: 0x6a92d0
// body: available
// range: 0x6a92d0-0x6a9483 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a92d0(undefined4 *param_1,int param_2,undefined4 param_3,char param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 uStack_4c;
  int iStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined1 local_28 [24];
  undefined8 local_10;
  float local_8;
  
  fVar1 = *(float *)(param_2 + 8);
  fVar5 = *(float *)(param_2 + 0xc);
  fVar4 = fVar5;
  if (16.0 <= fVar1) {
    if (16.0 <= fVar5) {
      fVar4 = 16.0;
    }
  }
  else if (fVar1 <= fVar5) {
    fVar4 = fVar1;
  }
  local_10 = (double)(fVar4 * 0.7) + 6755399441055744.0;
  local_8 = (float)((uint)local_10 | 1);
  iVar3 = ((int)fVar5 - (int)local_8) / 2 + (int)*(float *)(param_2 + 4);
  local_38 = 0xe5ffffff;
  uStack_3c = 0x6a935e;
  FUN_00684c50();
  local_38 = 0;
  iVar2 = *(int *)*param_1;
  uStack_3c = (uint)local_8;
  puStack_40 = (undefined1 *)local_8;
  iStack_48 = 0x6a9374;
  puStack_44 = (undefined1 *)iVar3;
  uStack_3c = FUN_00472d90();
  puStack_40 = (undefined1 *)0x6a9380;
  (**(code **)(iVar2 + 0x54))();
  puStack_40 = (undefined1 *)0x80000000;
  puStack_44 = (undefined1 *)0x6a9391;
  FUN_00684c50();
  fVar1 = local_8;
  puStack_40 = (undefined1 *)local_8;
  puStack_44 = (undefined1 *)local_8;
  uStack_4c = 0x6a93a1;
  iStack_48 = iVar3;
  FUN_00472d90();
  FUN_0040e4d0(&uStack_4c);
  FUN_00677150();
  fVar5 = (float)((int)fVar1 / 2);
  local_10 = (double)CONCAT44(fVar5,(uint)local_10);
  fVar5 = fVar5 + 1.0;
  local_8 = ((float)(int)fVar1 - fVar5) * 0.5;
  puStack_40 = (undefined1 *)0x3f800000;
  puStack_44 = (undefined1 *)0x6a941f;
  FUN_00472db0();
  puStack_40 = local_28;
  puStack_44 = (undefined1 *)0x6a9430;
  (**(code **)(*(int *)*param_1 + 0x50))();
  if (param_4 == '\0') {
    iStack_48 = 0x6a946d;
    puStack_44 = (undefined1 *)fVar5;
    FUN_00472db0();
    puStack_44 = local_28;
    iStack_48 = 0x6a947b;
    (**(code **)(*(int *)*param_1 + 0x50))();
  }
  return;
}

