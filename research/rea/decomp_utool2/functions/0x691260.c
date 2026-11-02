// rea decompile_all
// name: FUN_00691260
// address: 0x691260
// body: available
// range: 0x691260-0x691433 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_00691260(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iStack_80;
  int **ppiStack_7c;
  int *piStack_78;
  int *piStack_74;
  int *local_64;
  int **local_60;
  int *piStack_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c [5];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_18 [20];
  
  local_38 = 1;
  uStack_34 = 1;
  uStack_30 = 1;
  uStack_2c = 1;
  piStack_74 = (int *)0x69128d;
  piStack_74 = (int *)FUN_0048d850();
  piStack_78 = (int *)local_18;
  ppiStack_7c = (int **)0x69129c;
  piVar2 = (int *)FUN_004107c0();
  piStack_74 = (int *)piVar2[3];
  piStack_78 = (int *)piVar2[2];
  ppiStack_7c = (int **)piVar2[1];
  iStack_80 = *piVar2;
  FUN_006e9790();
  if (*(int *)(local_54 + 0xf8) == 0) {
    local_50 = 0;
  }
  else {
    local_50 = *(int *)(*(int *)(local_54 + 0xf8) + 8);
  }
  local_4c[3] = (*(int *)(local_54 + 0x98) - *(int *)(local_54 + 0x10c)) + -8;
  iVar3 = *(int *)(local_54 + 0x7c);
  if (*(char *)(iVar3 + 0x84) == '\0') {
    local_64 = *(int **)(iVar3 + 0x1c);
  }
  else {
    local_64 = *(int **)(iVar3 + 0x18);
  }
  iVar4 = 8;
  iVar3 = 0;
  local_60 = (int **)0x8;
  local_58 = 0;
  if (0 < *(int *)(local_54 + 0x3a0)) {
    do {
      piVar2 = *(int **)(*(int *)(local_54 + 0x398) + iVar3 * 4);
      local_4c[0] = *(int *)(*(int *)(local_54 + 0x7c) + 0x88);
      if (*(code **)(*piVar2 + 200) == FUN_00692930) {
        if (piVar2[0x3a] != local_4c[0]) {
          piVar2[0x3a] = local_4c[0];
          FUN_006e6400(&iStack_80);
          FUN_006ce9f0(1);
          piStack_74 = (int *)0x691368;
          (**(code **)(*piVar2 + 0x84))();
        }
      }
      else {
        piStack_74 = local_4c;
        piStack_78 = (int *)0x69142f;
        (**(code **)(*piVar2 + 200))();
      }
      piStack_74 = local_4c + 1;
      piStack_5c = (int *)0x1;
      piStack_78 = local_4c + 2;
      local_4c[2] = 1;
      ppiStack_7c = &piStack_5c;
      local_4c[1] = 1;
      iStack_80 = 0;
      cVar1 = (**(code **)(*piVar2 + 0xcc))(local_64);
      if (cVar1 != '\0') {
        if ((local_4c[3] < (int)piStack_5c + iVar4) && (8 < iVar4)) {
          local_60 = (int **)((int)local_60 + (int)local_64);
          iVar4 = 8;
        }
        piStack_74 = local_64;
        piStack_78 = piStack_5c;
        ppiStack_7c = local_60;
        iStack_80 = iVar4;
        FUN_006e9790();
        iVar4 = (int)piStack_5c + iVar4 + 8;
        if (local_58 < iVar4) {
          local_58 = iVar4;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(local_54 + 0x3a0));
  }
  piStack_74 = (int *)((int)local_64 + (int)(local_60 + 2));
  ppiStack_7c = *(int ***)(local_50 + 0x14);
  iStack_80 = *(int *)(local_50 + 0x10);
  piStack_78 = (int *)local_58;
  FUN_006e9790();
  return;
}

