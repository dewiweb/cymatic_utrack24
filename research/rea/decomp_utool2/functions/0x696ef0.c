// rea decompile_all
// name: FUN_00696ef0
// address: 0x696ef0
// body: available
// range: 0x696ef0-0x696fa5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00696ef0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 local_8;
  
  iVar2 = *param_1;
  if (*(int *)(in_ECX + 0x108) != iVar2) {
    if (iVar2 != 0) {
      LOCK();
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      UNLOCK();
    }
    puVar3 = *(undefined4 **)(in_ECX + 0x108);
    *(int *)(in_ECX + 0x108) = iVar2;
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = puVar3 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        uStack_1c = 1;
        piStack_20 = (int *)0x696f31;
        (**(code **)*puVar3)();
      }
    }
  }
  uStack_1c = 0;
  piStack_20 = (int *)0x1000201;
  puStack_24 = &local_8;
  uStack_28 = 0x696f43;
  FUN_006e8e70();
  iVar2 = *(int *)(in_ECX + 0x11c);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    uStack_1c = *(undefined4 *)(in_ECX + 0x128);
    piStack_20 = param_1;
    iVar4 = *(int *)(*(int *)(in_ECX + 0x114) + iVar2 * 4);
    puStack_24 = (undefined4 *)0x696f69;
    FUN_004a0830();
    *(undefined4 *)(iVar4 + 4) = local_8;
  }
  uStack_1c = 0x696f7b;
  FUN_00692ac0();
  uStack_1c = 0x696f82;
  FUN_00696340();
  uStack_1c = 0x696f89;
  FUN_00696170();
  FUN_006e6400(&uStack_28);
  FUN_006ce9f0(1);
  return;
}

