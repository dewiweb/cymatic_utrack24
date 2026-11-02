// rea decompile_all
// name: FUN_006bb260
// address: 0x6bb260
// body: available
// range: 0x6bb260-0x6bb375 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006bb260(undefined1 *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_1d;
  undefined4 local_19;
  undefined1 local_15 [5];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072484d;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 100) != 0) {
    local_38 = 0;
    local_30 = 0;
    cVar1 = FUN_00628120(&local_1d,local_15,&local_40,&local_38,&local_30,&local_19);
    if (cVar1 != '\0') {
      local_8 = 1;
      iVar3 = *(int *)(*(int *)(in_ECX + 100) + 0x28);
      uVar4 = (undefined4)local_38;
      uVar5 = local_38._4_4_;
      uVar6 = (undefined4)local_30;
      uVar7 = local_30._4_4_;
      if ((iVar3 == 0) || (*(char *)(iVar3 + 0x25) == '\0')) {
        iVar3 = *(int *)(in_ECX + 100) + 0x2c;
      }
      else {
        iVar3 = FUN_00628100((undefined4)local_38,local_38._4_4_,(undefined4)local_30,local_30._4_4_
                             ,local_19);
      }
      local_8 = 0xffffffff;
      cVar1 = FUN_006bb030(iVar3,local_1d,local_40,local_3c,uVar4,uVar5,uVar6,uVar7,local_19);
      if (cVar1 != '\0') {
        *param_1 = 1;
      }
      ExceptionList = local_10;
      return 1;
    }
    iVar3 = *(int *)(in_ECX + 100);
    if (iVar3 != 0) {
      *(undefined4 *)(in_ECX + 100) = 0;
      FUN_006285d0(uVar2);
      FUN_004bfe14(iVar3,0x30);
    }
  }
  ExceptionList = local_10;
  return 0;
}

