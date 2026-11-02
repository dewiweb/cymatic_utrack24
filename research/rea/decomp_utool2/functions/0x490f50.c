// rea decompile_all
// name: FUN_00490f50
// address: 0x490f50
// body: available
// range: 0x490f50-0x4910e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00490f50(char param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_54 [16];
  undefined1 local_44 [16];
  undefined1 local_34 [16];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702082;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*in_ECX + 0x28))(1,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (DAT_00c8a67c == 0) {
    local_14 = operator_new(0xd0);
    local_8 = 0;
    DAT_00c8a67c = FUN_006cb960();
    local_8 = 0xffffffff;
  }
  local_14 = (void *)(DAT_00c8a67c + 0x90);
  if (((param_1 != '\0') && (in_ECX[0x26] != 0)) && (*(int *)(in_ECX[0x26] + 8) != 0)) {
    piVar1 = (int *)FUN_006e6400(local_34);
    FUN_006cf960(&local_1c,piVar1[2] / 2 + *piVar1,piVar1[3] / 2 + piVar1[1]);
    piVar1 = (int *)FUN_006e6400(local_44);
    FUN_006cf960(&local_24,piVar1[2] / 2 + *piVar1,piVar1[3] / 2 + piVar1[1]);
    uVar5 = 0;
    uVar6 = 0x3ff00000;
    uVar7 = 0;
    uVar8 = 0x3ff00000;
    uVar4 = 1;
    uVar3 = 0x78;
    uVar2 = FUN_0046fc10(local_54,local_1c - local_24,local_18 - local_20);
    FUN_006e6060(in_ECX,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
    ExceptionList = local_10;
    return;
  }
  FUN_006b4410(in_ECX,0x78);
  ExceptionList = local_10;
  return;
}

