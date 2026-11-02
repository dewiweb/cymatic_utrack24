// rea decompile_all
// name: FUN_005e2540
// address: 0x5e2540
// body: available
// range: 0x5e2540-0x5e2818 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005e2540(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int *piVar6;
  int *local_c;
  
  iVar4 = *(int *)(in_ECX + 0x1c);
  if (iVar4 == 0) {
    return 0xffffff7f;
  }
  iVar1 = FUN_005eabc0();
  iVar1 = iVar1 + 1;
  *(int *)(iVar4 + 0x18) = iVar1;
  if (0 < iVar1) {
    iVar5 = 0;
    if (0 < iVar1) {
      local_c = (int *)(iVar4 + 0x720);
      do {
        iVar1 = FUN_005e7690();
        *local_c = iVar1;
        if (iVar1 == 0) goto LAB_005e2805;
        iVar5 = iVar5 + 1;
        local_c = local_c + 1;
      } while (iVar5 < *(int *)(iVar4 + 0x18));
    }
    iVar1 = FUN_005eabc0();
    iVar1 = iVar1 + 1;
    if (0 < iVar1) {
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          iVar2 = FUN_005eabc0();
          if (iVar2 != 0) goto LAB_005e2805;
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar1);
      }
      iVar1 = FUN_005eabc0();
      *(int *)(iVar4 + 0x10) = iVar1 + 1;
      if (0 < iVar1 + 1) {
        local_c = (int *)0x0;
        piVar6 = (int *)(iVar4 + 0x420);
        do {
          iVar1 = FUN_005eabc0();
          piVar6[-0x40] = iVar1;
          if ((iVar1 < 0) || (1 < iVar1)) goto LAB_005e2805;
          iVar1 = (**(code **)((&PTR_DAT_00b9c314)[iVar1] + 4))(in_ECX);
          *piVar6 = iVar1;
          if (iVar1 == 0) goto LAB_005e2805;
          piVar6 = piVar6 + 1;
          local_c = (int *)((int)local_c + 1);
        } while ((int)local_c < *(int *)(iVar4 + 0x10));
        iVar1 = FUN_005eabc0();
        *(int *)(iVar4 + 0x14) = iVar1 + 1;
        if (0 < iVar1 + 1) {
          local_c = (int *)0x0;
          piVar6 = (int *)(iVar4 + 0x620);
          do {
            iVar1 = FUN_005eabc0();
            piVar6[-0x40] = iVar1;
            if ((iVar1 < 0) || (2 < iVar1)) goto LAB_005e2805;
            iVar1 = (**(code **)((&PTR_DAT_00b16a2c)[iVar1] + 4))(in_ECX);
            *piVar6 = iVar1;
            if (iVar1 == 0) goto LAB_005e2805;
            piVar6 = piVar6 + 1;
            local_c = (int *)((int)local_c + 1);
          } while ((int)local_c < *(int *)(iVar4 + 0x14));
          iVar1 = FUN_005eabc0();
          *(int *)(iVar4 + 0xc) = iVar1 + 1;
          if (0 < iVar1 + 1) {
            local_c = (int *)0x0;
            piVar6 = (int *)(iVar4 + 0x220);
            do {
              iVar1 = FUN_005eabc0();
              piVar6[-0x40] = iVar1;
              if ((iVar1 < 0) || (0 < iVar1)) goto LAB_005e2805;
              iVar1 = (**(code **)((&PTR_PTR_00b75304)[iVar1] + 4))(in_ECX);
              *piVar6 = iVar1;
              if (iVar1 == 0) goto LAB_005e2805;
              piVar6 = piVar6 + 1;
              local_c = (int *)((int)local_c + 1);
            } while ((int)local_c < *(int *)(iVar4 + 0xc));
            iVar1 = FUN_005eabc0();
            *(int *)(iVar4 + 8) = iVar1 + 1;
            if (0 < iVar1 + 1) {
              local_c = (int *)0x0;
              piVar6 = (int *)(iVar4 + 0x20);
              do {
                iVar1 = FUN_004c5556(1,0x10);
                *piVar6 = iVar1;
                uVar3 = FUN_005eabc0();
                *(undefined4 *)*piVar6 = uVar3;
                uVar3 = FUN_005eabc0();
                *(undefined4 *)(*piVar6 + 4) = uVar3;
                uVar3 = FUN_005eabc0();
                *(undefined4 *)(*piVar6 + 8) = uVar3;
                uVar3 = FUN_005eabc0();
                *(undefined4 *)(*piVar6 + 0xc) = uVar3;
                iVar1 = *piVar6;
                if ((((0 < *(int *)(iVar1 + 4)) || (0 < *(int *)(iVar1 + 8))) ||
                    (*(int *)(iVar4 + 0xc) <= *(int *)(iVar1 + 0xc))) || (*(int *)(iVar1 + 0xc) < 0)
                   ) goto LAB_005e2805;
                piVar6 = piVar6 + 1;
                local_c = (int *)((int)local_c + 1);
              } while ((int)local_c < *(int *)(iVar4 + 8));
              iVar4 = FUN_005eabc0();
              if (iVar4 == 1) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
LAB_005e2805:
  FUN_005e2a80();
  return 0xffffff7b;
}

