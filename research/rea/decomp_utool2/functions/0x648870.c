// rea decompile_all
// name: FUN_00648870
// address: 0x648870
// body: available
// range: 0x648870-0x648aaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x648a96 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x648a9d to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x648aab to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00648870(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *_Memory;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  undefined4 in_EDX;
  
  if (*(int *)(in_ECX + 0x34) != 0x49444154) {
    piVar1 = *(int **)(in_ECX + 0x70);
    if (piVar1 == (int *)0x0) {
      iVar4 = *(int *)(in_ECX + 0x74) + 4;
      if ((iVar4 == 0) || (puVar5 = (undefined4 *)FUN_004c554b(iVar4), puVar5 == (undefined4 *)0x0))
      goto LAB_00648a96;
      *(undefined4 **)(in_ECX + 0x70) = puVar5;
      *puVar5 = 0;
    }
    else {
      _Memory = (int *)*piVar1;
      if (_Memory != (int *)0x0) {
        *piVar1 = 0;
        do {
          piVar1 = (int *)*_Memory;
          FID_conflict__free(_Memory);
          _Memory = piVar1;
        } while (piVar1 != (int *)0x0);
      }
    }
    uVar6 = FUN_006494e0();
    iVar4 = FUN_00649230(uVar6);
    if (iVar4 != 0) {
LAB_00648a96:
                    /* WARNING: Subroutine does not return */
      FUN_00656590();
    }
    *(int *)(in_ECX + 0x44) = *(int *)(in_ECX + 0x70) + 4;
    *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(in_ECX + 0x74);
  }
  *(undefined4 *)(in_ECX + 0x38) = in_EDX;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
LAB_00648912:
  do {
    iVar4 = -1;
    if (param_1 != -1) {
      iVar4 = param_1;
    }
    *(int *)(in_ECX + 0x3c) = iVar4;
    iVar7 = FUN_00618f20();
    param_1 = (param_1 - iVar4) + *(int *)(in_ECX + 0x3c);
    *(undefined4 *)(in_ECX + 0x3c) = 0;
    if (*(int *)(in_ECX + 0x48) == 0) {
      uVar2 = *(uint *)(in_ECX + 0x74);
      iVar4 = *(int *)(in_ECX + 0x70) + 4;
      if (((*(byte *)(in_ECX + 0x28) & 4) == 0) && (*(char *)(in_ECX + 0x234) == '\0')) {
        FUN_006494e0();
        FUN_00649460();
      }
      if (0x7fffffff < uVar2) goto LAB_00648a96;
      FUN_00649770(uVar2);
      if ((iVar4 != 0) && (uVar2 != 0)) {
        if (*(code **)(in_ECX + 0xc) == (code *)0x0) goto LAB_00648a96;
        (**(code **)(in_ECX + 0xc))();
        FUN_006598a0(uVar2);
      }
      *(undefined4 *)(in_ECX + 0x26c) = 0x82;
      if (*(code **)(in_ECX + 0xc) == (code *)0x0) goto LAB_00648a96;
      (**(code **)(in_ECX + 0xc))();
      *(uint *)(in_ECX + 0x28) = *(uint *)(in_ECX + 0x28) | 4;
      *(int *)(in_ECX + 0x44) = iVar4;
      *(uint *)(in_ECX + 0x48) = uVar2;
      if (iVar7 != 0) {
LAB_00648a2e:
        if ((iVar7 == 1) && (param_2 == 4)) {
          iVar4 = *(int *)(in_ECX + 0x70);
          iVar7 = *(int *)(in_ECX + 0x74);
          iVar3 = *(int *)(in_ECX + 0x48);
          if (((*(byte *)(in_ECX + 0x28) & 4) == 0) && (*(char *)(in_ECX + 0x234) == '\0')) {
            FUN_006494e0();
            FUN_00649460();
          }
          FUN_00649680(iVar4 + 4,iVar7 - iVar3);
          *(undefined4 *)(in_ECX + 0x48) = 0;
          *(uint *)(in_ECX + 0x28) = *(uint *)(in_ECX + 0x28) | 0xc;
          *(undefined4 *)(in_ECX + 0x44) = 0;
          *(undefined4 *)(in_ECX + 0x34) = 0;
          return;
        }
        FUN_00658fd0();
                    /* WARNING: Subroutine does not return */
        FUN_00656590();
      }
      if (param_2 != 0) goto LAB_00648912;
    }
    else if (iVar7 != 0) goto LAB_00648a2e;
    if (param_1 == 0) {
      if (param_2 != 4) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00656590();
    }
  } while( true );
}

