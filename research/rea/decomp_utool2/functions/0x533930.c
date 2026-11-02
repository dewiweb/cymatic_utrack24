// rea decompile_all
// name: FUN_00533930
// address: 0x533930
// body: available
// range: 0x533930-0x533ad5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00533930(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int in_ECX;
  uint uVar3;
  undefined1 auStack_2c [8];
  undefined4 uStack_24;
  void *local_10;
  
  FUN_005333a0();
  *(undefined4 *)(in_ECX + 0x4a0) = param_1;
  *(int *)(in_ECX + 0x4a4) = param_2;
  *(undefined4 *)(in_ECX + 0x4a8) = *(undefined4 *)(param_2 + 0x24);
  switch(*(undefined4 *)(param_2 + 0x28)) {
  case 1:
    uVar1 = 0xac44;
    break;
  case 2:
    uVar1 = 48000;
    break;
  case 3:
    uVar1 = 0x15888;
    break;
  case 4:
    uVar1 = 96000;
    break;
  default:
    uVar1 = 0xffffffff;
  }
  *(undefined4 *)(in_ECX + 0x4ac) = uVar1;
  uVar1 = FUN_0053e9b0();
  *(undefined4 *)(in_ECX + 0x4c4) = uVar1;
  FUN_00533190();
  uVar3 = 0;
  if (0 < *(int *)(param_2 + 0x5c)) {
    if (*(int *)(param_2 + 0x5c) < 1) goto LAB_005339e0;
    do {
      if ((uVar3 < *(uint *)(param_2 + 0x5c)) &&
         (*(int *)(*(int *)(param_2 + 0x54) + uVar3 * 4) != 0)) {
        uStack_24 = 0x5339e0;
        FUN_0053e620();
      }
LAB_005339e0:
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < *(int *)(param_2 + 0x5c));
  }
  uStack_24 = 0x5339f3;
  puVar2 = (undefined4 *)FUN_00540420();
  uVar1 = *(undefined4 *)(in_ECX + 0x4c8);
  *(undefined4 *)(in_ECX + 0x4c8) = *puVar2;
  *puVar2 = uVar1;
  *(undefined4 *)(in_ECX + 0x4cc) = puVar2[1];
  *(undefined4 *)(in_ECX + 0x4d0) = puVar2[2];
  puVar2[2] = 0;
  uStack_24 = 0x533a26;
  FID_conflict__free(local_10);
  if (*(int *)(param_2 + 0x2c) == 1) {
    *(undefined4 *)(in_ECX + 0x4b0) = 0x10;
  }
  else if (*(int *)(param_2 + 0x2c) == 2) {
    *(undefined4 *)(in_ECX + 0x4b0) = 0x18;
  }
  FUN_00532710();
  if ((*(int *)(in_ECX + 500) == 0) && (*(int *)(in_ECX + 500) != *(int *)(in_ECX + 0x7c))) {
    *(int *)(in_ECX + 500) = *(int *)(in_ECX + 0x7c);
    FUN_006e6400(auStack_2c);
    FUN_006ce9f0(1);
    FUN_006e7e60();
  }
  FUN_006e7e60();
  FUN_006e6400(auStack_2c);
  FUN_006ce9f0(1);
  FUN_00531cb0();
  (**(code **)(**(int **)(in_ECX + 0x234) + 8))();
  return;
}

