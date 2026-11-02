// rea decompile_all
// name: FUN_005d7030
// address: 0x5d7030
// body: available
// range: 0x5d7030-0x5d71da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005d7030(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *in_ECX;
  undefined4 *in_EDX;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int local_c;
  
  if (in_ECX == (int *)0x0) {
    iVar3 = 0;
LAB_005d705d:
    local_c = 0;
    iVar7 = 0;
  }
  else {
    iVar3 = in_ECX[0x10];
    if (iVar3 == 0) goto LAB_005d705d;
    iVar7 = *(int *)(iVar3 + 4);
    local_c = *(int *)(iVar3 + 0x68);
    if (iVar7 != 0) {
      iVar6 = *(int *)(iVar7 + 0x1c);
      goto LAB_005d7068;
    }
  }
  iVar6 = 0;
LAB_005d7068:
  puVar8 = (undefined4 *)(-(uint)(in_ECX != (int *)0x0) & (uint)(in_ECX + 1));
  if ((((iVar3 != 0) && (local_c != 0)) && (iVar7 != 0)) &&
     ((iVar6 != 0 && (puVar8 != (undefined4 *)0x0)))) {
    FUN_005e92f0();
    uVar5 = in_EDX[1];
    uVar1 = *in_EDX;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[4] = uVar5;
    puVar8[3] = uVar1;
    puVar8[2] = uVar1;
    iVar3 = FUN_005eabc0();
    if (iVar3 != 0) {
      return 0xffffff79;
    }
    iVar3 = FUN_005eabc0();
    if (iVar3 != -1) {
      in_ECX[10] = iVar3;
      piVar4 = (int *)(iVar6 + iVar3 * 4 + 0x20);
      piVar2 = (int *)*piVar4;
      if (piVar2 != (int *)0x0) {
        iVar3 = *piVar2;
        in_ECX[7] = iVar3;
        if (iVar3 == 0) {
          in_ECX[6] = 0;
          in_ECX[8] = 0;
        }
        else {
          iVar3 = FUN_005eabc0();
          in_ECX[6] = iVar3;
          iVar3 = FUN_005eabc0();
          in_ECX[8] = iVar3;
          if (iVar3 == -1) {
            return 0xffffff78;
          }
        }
        in_ECX[0xc] = in_EDX[4];
        in_ECX[0xd] = in_EDX[5];
        in_ECX[0xe] = in_EDX[6];
        in_ECX[0xf] = in_EDX[7];
        in_ECX[0xb] = in_EDX[3];
        in_ECX[9] = *(int *)(iVar6 + in_ECX[7] * 4);
        iVar3 = FUN_005e9360();
        iVar9 = 0;
        *in_ECX = iVar3;
        if (0 < *(int *)(iVar7 + 4)) {
          do {
            uVar5 = FUN_005e9360();
            *(undefined4 *)(*in_ECX + iVar9 * 4) = uVar5;
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)(iVar7 + 4));
        }
        uVar5 = (**(code **)((&PTR_PTR_00b75304)
                             [*(int *)(iVar6 + 0x120 + *(int *)(*piVar4 + 0xc) * 4)] + 0x10))();
        return uVar5;
      }
    }
  }
  return 0xffffff78;
}

