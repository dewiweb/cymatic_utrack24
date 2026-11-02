// rea decompile_all
// name: FUN_0064bb50
// address: 0x64bb50
// body: available
// range: 0x64bb50-0x64bfe6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64bfdb to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x64bfe2 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064bb50(int param_1)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  void *_Memory;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  char *pcVar8;
  int iVar9;
  int in_EDX;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int local_fc;
  
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (((in_ECX != 0) && (in_EDX != 0)) && (param_1 != 0)) {
    iVar6 = *(int *)(in_EDX + 0x80);
    if (*(int *)(in_EDX + 0x84) - iVar6 < 1) {
      if (0x7fffffff - iVar6 < 1) {
LAB_0064bce8:
        if ((*(uint *)(in_ECX + 0x28) & 0x8000) != 0) {
          FUN_00656080("too many text chunks");
          FUN_006563b0();
          __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
          return;
        }
        if ((*(uint *)(in_ECX + 0x2c) & 0x400000) != 0) {
          FUN_006563b0();
          __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
          return;
        }
LAB_0064bfdb:
                    /* WARNING: Subroutine does not return */
        FUN_00656590();
      }
      if (iVar6 + 1 < 0x7ffffff7) {
        uVar11 = iVar6 + 9U & 0xfffffff8;
      }
      else {
        uVar11 = 0x7fffffff;
      }
      _Memory = *(void **)(in_EDX + 0x88);
      iVar6 = FUN_00655c60(iVar6,uVar11 - iVar6,0x1c);
      if (iVar6 == 0) goto LAB_0064bce8;
      if (_Memory != (void *)0x0) {
        FID_conflict__free(_Memory);
      }
      *(uint *)(in_EDX + 0xe8) = *(uint *)(in_EDX + 0xe8) | 0x4000;
      *(int *)(in_EDX + 0x88) = iVar6;
      *(uint *)(in_EDX + 0x84) = uVar11;
    }
    iVar6 = *(int *)(in_EDX + 0x88);
    puVar12 = (undefined4 *)(param_1 + 0x14);
    local_fc = 0;
    iVar7 = iVar6;
    do {
      iVar4 = *(int *)(in_EDX + 0x80);
      pcVar8 = (char *)puVar12[-4];
      piVar2 = (int *)(iVar7 + iVar4 * 0x1c);
      if (pcVar8 != (char *)0x0) {
        iVar7 = puVar12[-5];
        if ((iVar7 < -1) || (2 < iVar7)) {
          if ((*(uint *)(in_ECX + 0x28) & 0x8000) == 0) {
            if ((*(uint *)(in_ECX + 0x2c) & 0x400000) == 0) goto LAB_0064bfdb;
          }
          else {
            FUN_00656080("text compression mode is out of range");
          }
          FUN_006563b0();
          iVar7 = iVar6;
        }
        else {
          pcVar1 = pcVar8 + 1;
          do {
            cVar3 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar3 != '\0');
          iVar9 = (int)pcVar8 - (int)pcVar1;
          if (iVar7 < 1) {
            iVar10 = 0;
LAB_0064bcb0:
            iVar14 = 0;
          }
          else {
            pcVar8 = (char *)*puVar12;
            if (pcVar8 == (char *)0x0) {
              iVar10 = 0;
            }
            else {
              pcVar1 = pcVar8 + 1;
              do {
                cVar3 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar3 != '\0');
              iVar10 = (int)pcVar8 - (int)pcVar1;
            }
            pcVar8 = (char *)puVar12[1];
            if (pcVar8 == (char *)0x0) goto LAB_0064bcb0;
            pcVar1 = pcVar8 + 1;
            do {
              cVar3 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar3 != '\0');
            iVar14 = (int)pcVar8 - (int)pcVar1;
          }
          pcVar8 = (char *)puVar12[-3];
          if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
            iVar13 = 0;
            iVar7 = (uint)(0 < iVar7) * 2 + -1;
          }
          else {
            pcVar1 = pcVar8 + 1;
            do {
              cVar3 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar3 != '\0');
            iVar13 = (int)pcVar8 - (int)pcVar1;
          }
          *piVar2 = iVar7;
          iVar7 = iVar14 + 4 + iVar13 + iVar10 + iVar9;
          if (iVar7 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = FUN_004c554b(iVar7);
          }
          piVar2[1] = iVar7;
          if (iVar7 == 0) {
            if ((*(uint *)(in_ECX + 0x28) & 0x8000) != 0) {
              FUN_00656080("text chunk: out of memory");
              FUN_006563b0();
              __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
              return;
            }
            if ((*(uint *)(in_ECX + 0x2c) & 0x400000) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00656590();
            }
            FUN_006563b0();
            __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
            return;
          }
          FUN_004c2c30(iVar7,puVar12[-4],iVar9);
          *(undefined1 *)(iVar9 + piVar2[1]) = 0;
          if ((int)puVar12[-5] < 1) {
            piVar2[5] = 0;
            piVar2[6] = 0;
            iVar14 = piVar2[1] + 1 + iVar9;
          }
          else {
            iVar7 = piVar2[1] + iVar9 + 1;
            piVar2[5] = iVar7;
            FUN_004c2c30(iVar7,*puVar12,iVar10);
            *(undefined1 *)(iVar10 + piVar2[5]) = 0;
            iVar10 = piVar2[5] + 1 + iVar10;
            piVar2[6] = iVar10;
            FUN_004c2c30(iVar10,puVar12[1],iVar14);
            *(undefined1 *)(iVar14 + piVar2[6]) = 0;
            iVar14 = piVar2[6] + 1 + iVar14;
          }
          piVar2[2] = iVar14;
          if (iVar13 != 0) {
            FUN_004c2c30(piVar2[2],puVar12[-3],iVar13);
          }
          *(undefined1 *)(iVar13 + piVar2[2]) = 0;
          if (*piVar2 < 1) {
            piVar2[3] = iVar13;
            piVar2[4] = 0;
          }
          else {
            piVar2[3] = 0;
            piVar2[4] = iVar13;
          }
          *(int *)(in_EDX + 0x80) = iVar4 + 1;
          iVar7 = *(int *)(in_EDX + 0x88);
        }
      }
      puVar12 = puVar12 + 7;
      local_fc = local_fc + 1;
    } while (local_fc < 1);
  }
  __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
  return;
}

