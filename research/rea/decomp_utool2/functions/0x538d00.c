// rea decompile_all
// name: FUN_00538d00
// address: 0x538d00
// body: available
// range: 0x538d00-0x538dfd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00538d00(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int in_ECX;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 **ppuStack_18;
  undefined4 *local_8;
  
  ppuStack_18 = &local_8;
  uStack_1c = 0x538d13;
  puVar3 = (undefined4 *)FUN_00413340();
  uVar2 = *(undefined4 *)(in_ECX + 0x1a0);
  *(undefined4 *)(in_ECX + 0x1a0) = *puVar3;
  *puVar3 = uVar2;
  if (local_8 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_8 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      ppuStack_18 = (undefined4 **)0x1;
      uStack_1c = 0x538d3b;
      (**(code **)*local_8)();
    }
  }
  if (*(int *)(in_ECX + 0x1a0) != 0) {
    ppuStack_18 = (undefined4 **)0x538d55;
    FUN_006e7e60();
    FUN_006e6400(&uStack_24);
    FUN_006ce9f0(1);
    if ((*(int *)(in_ECX + 0x1a0) == 0) || (*(int *)(*(int *)(in_ECX + 0x1a0) + 0x18) == 0)) {
      ppuStack_18 = (undefined4 **)0x0;
      uStack_1c = 0x538dab;
      (**(code **)(*(int *)(in_ECX + 0x24) + 0x28))();
      uStack_1c = 0;
      iStack_20 = 0x538db4;
      (**(code **)(*(int *)(in_ECX + 0xf4) + 0x28))();
      iStack_20 = 0x28;
    }
    else {
      ppuStack_18 = (undefined4 **)0x1;
      uStack_1c = 0x538d84;
      (**(code **)(*(int *)(in_ECX + 0x24) + 0x28))();
      uStack_1c = 1;
      iStack_20 = 0x538d8d;
      (**(code **)(*(int *)(in_ECX + 0xf4) + 0x28))();
      iStack_20 = *(int *)(in_ECX + 0x180) * *(int *)(*(int *)(in_ECX + 0x1a0) + 0x18);
    }
    uStack_24 = *(undefined4 *)(in_ECX + -0x60);
    FUN_006e9790(0,0x14);
    iStack_20 = *(int *)(in_ECX + 0x110) + *(int *)(in_ECX + 0x108);
    uStack_24 = *(undefined4 *)(in_ECX + -0x60);
    FUN_006e9790(*(undefined4 *)(in_ECX + -0x68),*(undefined4 *)(in_ECX + -100));
    iStack_20 = 0x538dea;
    piVar4 = (int *)FUN_00414d30();
    if (piVar4 != (int *)0x0) {
      iStack_20 = 0x538df8;
      (**(code **)(*piVar4 + 0x84))();
    }
  }
  return;
}

