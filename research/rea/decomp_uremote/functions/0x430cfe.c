// rea decompile_all
// name: FUN_00430cfe
// address: 0x430cfe
// body: available
// range: 0x430cfe-0x430ff9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00430cfe(undefined4 param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined2 extraout_var;
  int extraout_EDX;
  char *pcVar11;
  int iVar12;
  
  *param_2 = 1;
  iVar7 = FUN_0040ffcd("postscript-cmaps");
  param_2[0x79] = iVar7;
  iVar8 = FUN_0040ffb6("psaux");
  param_2[0x7a] = iVar8;
  if (iVar8 == 0) {
    iVar12 = 0xb;
  }
  else {
    uVar9 = FUN_0040ffb6("pshinter");
    param_2[0x8a] = uVar9;
    iVar12 = FUN_00430736();
    if ((iVar12 == 0) && (-1 < param_3)) {
      if (param_3 < 1) {
        param_2[4] = param_2[0x68];
        param_2[1] = 0;
        param_2[2] = 0xa11;
        if (*(char *)(param_2 + 0x27) != '\0') {
          param_2[2] = 0xa15;
        }
        if (param_2[0x85] != 0) {
          param_2[2] = param_2[2] | 0x100;
        }
        pcVar11 = (char *)param_2[0x24];
        param_2[5] = pcVar11;
        param_2[6] = 0;
        if (pcVar11 == (char *)0x0) {
          if (param_2[0x5b] != 0) {
            param_2[5] = param_2[0x5b];
          }
        }
        else {
          pcVar10 = (char *)param_2[0x23];
          if (pcVar10 != (char *)0x0) {
            while (cVar2 = *pcVar10, cVar2 != '\0') {
              cVar1 = *pcVar11;
              if (cVar2 == cVar1) {
                pcVar11 = pcVar11 + 1;
LAB_00430ddf:
                pcVar10 = pcVar10 + 1;
              }
              else {
                if ((cVar2 == ' ') || (cVar2 == '-')) goto LAB_00430ddf;
                if ((cVar1 != ' ') && (cVar1 != '-')) {
                  if (*pcVar11 == '\0') {
                    param_2[6] = pcVar10;
                  }
                  goto LAB_00430e1c;
                }
                pcVar11 = pcVar11 + 1;
              }
            }
            param_2[6] = "Regular";
          }
        }
LAB_00430e1c:
        if (param_2[6] == 0) {
          if (param_2[0x25] == 0) {
            param_2[6] = "Regular";
          }
          else {
            param_2[6] = param_2[0x25];
          }
        }
        param_2[3] = 0;
        if (param_2[0x26] != 0) {
          param_2[3] = 1;
        }
        if (((char *)param_2[0x25] != (char *)0x0) &&
           ((iVar12 = _strcmp((char *)param_2[0x25],"Bold"), iVar12 == 0 ||
            (iVar12 = _strcmp((char *)param_2[0x25],"Black"), iVar12 == 0)))) {
          param_2[3] = param_2[3] | 2;
        }
        param_2[7] = 0;
        param_2[8] = 0;
        param_2[0xd] = (int)*(short *)((int)param_2 + 0x1ce);
        param_2[0xe] = (int)*(short *)((int)param_2 + 0x1d2);
        param_2[0xf] = param_2[0x75] + 0xffff >> 0x10;
        param_2[0x10] = param_2[0x76] + 0xffff >> 0x10;
        if (*(short *)(param_2 + 0x11) == 0) {
          *(undefined2 *)(param_2 + 0x11) = 1000;
        }
        sVar3 = *(short *)(param_2 + 0xe);
        sVar5 = (short)((uint)(param_2[0x76] + 0xffff) >> 0x10);
        *(short *)((int)param_2 + 0x46) = sVar5;
        *(short *)(param_2 + 0x12) = sVar3;
        sVar6 = (short)((ulonglong)((uint)*(ushort *)(param_2 + 0x11) * 0xc) / 10);
        *(short *)((int)param_2 + 0x4a) = sVar6;
        if ((int)sVar6 < (int)sVar5 - (int)sVar3) {
          *(short *)((int)param_2 + 0x4a) = sVar5 - sVar3;
        }
        *(undefined2 *)(param_2 + 0x13) = *(undefined2 *)(param_2 + 0xf);
        iVar12 = FUN_00431abb();
        if (iVar12 == 0) {
          FUN_0040d211();
          *(undefined2 *)(param_2 + 0x13) = extraout_var;
          iVar12 = extraout_EDX;
        }
        else {
          iVar12 = 0;
        }
        *(undefined2 *)((int)param_2 + 0x4e) = *(undefined2 *)((int)param_2 + 0x4a);
        *(undefined2 *)(param_2 + 0x14) = *(undefined2 *)((int)param_2 + 0x9e);
        *(undefined2 *)((int)param_2 + 0x52) = *(undefined2 *)(param_2 + 0x28);
        if (iVar7 != 0) {
          piVar4 = *(int **)(iVar8 + 0x14);
          iVar12 = FUN_0040f8e2(piVar4[3],0,0);
          if ((iVar12 == 0) || (iVar12 == 0xa3)) {
            iVar7 = param_2[0x5c];
            iVar12 = 0;
            if (iVar7 == 1) {
              iVar7 = piVar4[2];
            }
            else if (iVar7 == 2) {
              iVar7 = *piVar4;
            }
            else if (iVar7 == 3) {
              iVar7 = piVar4[3];
            }
            else {
              if (iVar7 != 4) {
                return 0;
              }
              iVar7 = piVar4[1];
            }
            if (iVar7 != 0) {
              iVar12 = FUN_0040f8e2(iVar7,0,0);
            }
          }
        }
      }
      else {
        iVar12 = 6;
      }
    }
  }
  return iVar12;
}

