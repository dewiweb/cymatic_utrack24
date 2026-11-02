// rea decompile_all
// name: FUN_0053b3a0
// address: 0x53b3a0
// body: available
// range: 0x53b3a0-0x53b47a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0053b3a0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 in_ECX;
  int in_EDX;
  
  operator_new(0x38);
  uVar1 = *(undefined4 *)(in_EDX + 0x30);
  uVar4 = *(undefined1 *)(in_EDX + 0x34);
  iVar7 = *(int *)(in_EDX + 0x28);
  uVar2 = *(undefined4 *)(in_EDX + 0x2c);
  piVar6 = (int *)(iVar7 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  iVar7 = FUN_0053b570(in_ECX,*(undefined4 *)(in_EDX + 4),*(undefined4 *)(in_EDX + 8),iVar7,uVar2,
                       uVar4,uVar1);
  piVar6 = (int *)(*(int *)(in_EDX + 0xc) + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  LOCK();
  iVar3 = *(int *)(iVar7 + 0xc);
  *(int *)(iVar7 + 0xc) = *(int *)(in_EDX + 0xc);
  UNLOCK();
  piVar6 = (int *)(iVar3 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  iVar3 = *(int *)(in_EDX + 0x10);
  if (*(int *)(iVar7 + 0x10) != iVar3) {
    if (iVar3 != 0) {
      LOCK();
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      UNLOCK();
    }
    puVar5 = *(undefined4 **)(iVar7 + 0x10);
    *(int *)(iVar7 + 0x10) = iVar3;
    if (puVar5 != (undefined4 *)0x0) {
      LOCK();
      piVar6 = puVar5 + 1;
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*puVar5)(1);
      }
    }
  }
  *(undefined4 *)(iVar7 + 0x18) = *(undefined4 *)(in_EDX + 0x18);
  *(undefined4 *)(iVar7 + 0x1c) = *(undefined4 *)(in_EDX + 0x1c);
  *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(in_EDX + 0x20);
  *(undefined4 *)(iVar7 + 0x24) = *(undefined4 *)(in_EDX + 0x24);
  return iVar7;
}

