// rea decompile_all
// name: FUN_00433351
// address: 0x433351
// body: available
// range: 0x433351-0x43354a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00433351(undefined4 param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  
  *param_2 = 1;
  if (param_2[0x22] == 0) {
    iVar6 = FUN_0040ffb6("psaux");
    if (iVar6 == 0) {
      return 0xb;
    }
    param_2[0x22] = iVar6;
  }
  if (param_2[0x50] == 0) {
    iVar6 = FUN_0040ffb6("pshinter");
    param_2[0x50] = iVar6;
  }
  iVar6 = FUN_0041106d();
  if (((iVar6 == 0) && (iVar6 = FUN_00432fbb(param_2,param_3), iVar6 == 0)) && (-1 < param_3)) {
    if (param_3 == 0) {
      param_2[4] = param_2[0x4a];
      param_2[9] = 0;
      param_2[1] = 0;
      param_2[2] = 0x811;
      if (*(char *)(param_2 + 0x2f) != '\0') {
        param_2[2] = 0x815;
      }
      pcVar8 = (char *)param_2[0x2c];
      param_2[5] = pcVar8;
      param_2[6] = "Regular";
      if (pcVar8 == (char *)0x0) {
        if (param_2[0x23] != 0) {
          param_2[5] = param_2[0x23];
        }
      }
      else {
        pcVar9 = (char *)param_2[0x2b];
        if (pcVar9 != (char *)0x0) {
          while (cVar2 = *pcVar9, cVar2 != '\0') {
            cVar1 = *pcVar8;
            if (cVar2 == cVar1) {
              pcVar8 = pcVar8 + 1;
LAB_00433434:
              pcVar9 = pcVar9 + 1;
            }
            else {
              if ((cVar2 == ' ') || (cVar2 == '-')) goto LAB_00433434;
              if ((cVar1 != ' ') && (cVar1 != '-')) {
                if (*pcVar8 == '\0') {
                  param_2[6] = pcVar9;
                }
                break;
              }
              pcVar8 = pcVar8 + 1;
            }
          }
        }
      }
      param_2[3] = 0;
      if (param_2[0x2e] != 0) {
        param_2[3] = 1;
      }
      if (((char *)param_2[0x2d] != (char *)0x0) &&
         ((iVar7 = _strcmp((char *)param_2[0x2d],"Bold"), iVar7 == 0 ||
          (iVar7 = _strcmp((char *)param_2[0x2d],"Black"), iVar7 == 0)))) {
        param_2[3] = param_2[3] | 2;
      }
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[0xd] = (int)*(short *)((int)param_2 + 0xc6);
      param_2[0xe] = (int)*(short *)((int)param_2 + 0xca);
      param_2[0xf] = param_2[0x33] + 0xffff >> 0x10;
      param_2[0x10] = param_2[0x34] + 0xffff >> 0x10;
      if (*(short *)(param_2 + 0x11) == 0) {
        *(undefined2 *)(param_2 + 0x11) = 1000;
      }
      sVar3 = *(short *)(param_2 + 0xe);
      sVar4 = (short)((uint)(param_2[0x34] + 0xffff) >> 0x10);
      *(short *)((int)param_2 + 0x46) = sVar4;
      *(short *)(param_2 + 0x12) = sVar3;
      sVar5 = (short)((ulonglong)((uint)*(ushort *)(param_2 + 0x11) * 0xc) / 10);
      *(short *)((int)param_2 + 0x4a) = sVar5;
      if ((int)sVar5 < (int)sVar4 - (int)sVar3) {
        *(short *)((int)param_2 + 0x4a) = sVar4 - sVar3;
      }
      *(undefined2 *)(param_2 + 0x14) = *(undefined2 *)((int)param_2 + 0xbe);
      *(undefined2 *)((int)param_2 + 0x52) = *(undefined2 *)(param_2 + 0x30);
    }
    else {
      iVar6 = 6;
    }
  }
  return iVar6;
}

