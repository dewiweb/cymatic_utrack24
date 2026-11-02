// rea decompile_all
// name: FUN_0064b7c0
// address: 0x64b7c0
// body: available
// range: 0x64b7c0-0x64b9d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64b9cc to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064b7c0(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  char *pcVar5;
  int in_EDX;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  int local_e8;
  
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_e8 = 1;
  if (((in_ECX == 0) || (in_EDX == 0)) || (param_1 == 0)) goto LAB_0064b9bb;
  iVar4 = FUN_00655c60(*(undefined4 *)(in_EDX + 0xf8),1,0x10);
  if (iVar4 == 0) {
    if ((*(uint *)(in_ECX + 0x28) & 0x8000) != 0) {
      pcVar8 = "too many sPLT chunks";
      goto LAB_0064b98c;
    }
    uVar2 = *(uint *)(in_ECX + 0x2c);
joined_r0x0064b9af:
    if ((uVar2 & 0x400000) == 0) {
LAB_0064b9cc:
                    /* WARNING: Subroutine does not return */
      FUN_00656590();
    }
  }
  else {
    if (*(void **)(in_EDX + 0xf4) != (void *)0x0) {
      FID_conflict__free(*(void **)(in_EDX + 0xf4));
    }
    *(uint *)(in_EDX + 0xe8) = *(uint *)(in_EDX + 0xe8) | 0x20;
    *(int *)(in_EDX + 0xf4) = iVar4;
    piVar6 = (int *)(iVar4 + *(int *)(in_EDX + 0xf8) * 0x10);
    piVar7 = (int *)(param_1 + 0xc);
    do {
      if ((piVar7[-3] == 0) || (piVar7[-1] == 0)) {
        if ((*(uint *)(in_ECX + 0x2c) & 0x400000) == 0) goto LAB_0064b9cc;
        FUN_006563b0();
      }
      else {
        *(char *)(piVar6 + 1) = (char)piVar7[-2];
        pcVar5 = (char *)piVar7[-3];
        pcVar8 = pcVar5 + 1;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        pcVar5 = pcVar5 + (1 - (int)pcVar8);
        if (pcVar5 == (char *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_004c554b(pcVar5);
        }
        *piVar6 = iVar4;
        if (iVar4 == 0) break;
        FUN_004c2c30(iVar4,piVar7[-3],pcVar5);
        iVar4 = FUN_00655cf0();
        piVar6[2] = iVar4;
        if (iVar4 == 0) {
          if ((void *)*piVar6 != (void *)0x0) {
            FID_conflict__free((void *)*piVar6);
          }
          break;
        }
        piVar6[3] = *piVar7;
        FUN_004c2c30(iVar4,piVar7[-1],*piVar7 * 10);
        *(uint *)(in_EDX + 8) = *(uint *)(in_EDX + 8) | 0x2000;
        *(int *)(in_EDX + 0xf8) = *(int *)(in_EDX + 0xf8) + 1;
        piVar6 = piVar6 + 4;
      }
      piVar7 = piVar7 + 4;
      local_e8 = local_e8 + -1;
    } while (local_e8 != 0);
    if (local_e8 < 1) goto LAB_0064b9bb;
    if ((*(uint *)(in_ECX + 0x28) & 0x8000) == 0) {
      uVar2 = *(uint *)(in_ECX + 0x2c);
      goto joined_r0x0064b9af;
    }
    pcVar8 = "sPLT out of memory";
LAB_0064b98c:
    FUN_00656080(pcVar8);
  }
  FUN_006563b0();
LAB_0064b9bb:
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}

