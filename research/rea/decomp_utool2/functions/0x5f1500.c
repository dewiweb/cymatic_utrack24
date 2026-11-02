// rea decompile_all
// name: FUN_005f1500
// address: 0x5f1500
// body: available
// range: 0x5f1500-0x5f1ba9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005f1500(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  char *in_EDX;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  
  if (*(int *)*in_ECX != 1) {
    return 0;
  }
  ((int *)*in_ECX)[10] = 0;
  do {
    iVar2 = FUN_004c2420(in_EDX,0x3b);
    if (iVar2 == 0) {
      pcVar6 = in_EDX;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      uVar5 = (int)pcVar6 - (int)(in_EDX + 1);
    }
    else {
      uVar5 = iVar2 - (int)in_EDX;
    }
    if (uVar5 == 8) {
      iVar3 = _strncmp("bartlett",in_EDX,8);
      if (iVar3 == 0) {
        *(undefined4 *)(*in_ECX + 0x2c + *(int *)(*in_ECX + 0x28) * 0x10) = 0;
      }
      else {
        iVar3 = _strncmp("blackman",in_EDX,8);
        if (iVar3 != 0) goto LAB_005f165f;
        *(undefined4 *)(*in_ECX + 0x2c + *(int *)(*in_ECX + 0x28) * 0x10) = 2;
      }
      goto LAB_005f1b65;
    }
    if (uVar5 == 0xd) {
      iVar3 = _strncmp("bartlett_hann",in_EDX,0xd);
      if (iVar3 == 0) {
        *(undefined4 *)(*in_ECX + 0x2c + *(int *)(*in_ECX + 0x28) * 0x10) = 1;
        goto LAB_005f1b65;
      }
LAB_005f165f:
      iVar3 = _strncmp("gauss(",in_EDX,6);
      if (iVar3 == 0) {
        dVar11 = FID_conflict__strtod((wchar_t *)(in_EDX + 6),(wchar_t **)0x0);
        fVar8 = (float)dVar11;
        if ((fVar8 <= 0.0) || (0.5 < fVar8)) goto LAB_005f1b6a;
        *(float *)(*in_ECX + (*(int *)(*in_ECX + 0x28) + 3) * 0x10) = fVar8;
        *(undefined4 *)(*in_ECX + 0x2c + *(int *)(*in_ECX + 0x28) * 0x10) = 6;
        goto LAB_005f1b65;
      }
LAB_005f16c8:
      if (uVar5 == 7) goto LAB_005f16cd;
      if (uVar5 == 4) {
        iVar3 = _strncmp("hann",in_EDX,4);
        if (iVar3 != 0) goto LAB_005f1b6a;
        *(undefined4 *)(*in_ECX + 0x2c + *(int *)(*in_ECX + 0x28) * 0x10) = 8;
        goto LAB_005f1b65;
      }
      if (uVar5 == 0xd) {
        iVar3 = _strncmp("kaiser_bessel",in_EDX,0xd);
        if (iVar3 != 0) goto LAB_005f17da;
        *(undefined4 *)(*in_ECX + 0x2c + *(int *)(*in_ECX + 0x28) * 0x10) = 9;
        goto LAB_005f1b65;
      }
      if (uVar5 == 9) {
        iVar3 = _strncmp("rectangle",in_EDX,9);
        if (iVar3 == 0) {
          *(undefined4 *)(*in_ECX + 0x2c + *(int *)(*in_ECX + 0x28) * 0x10) = 0xb;
          goto LAB_005f1b65;
        }
LAB_005f17da:
        iVar3 = _strncmp("tukey(",in_EDX,6);
        if (iVar3 == 0) {
          dVar11 = FID_conflict__strtod((wchar_t *)(in_EDX + 6),(wchar_t **)0x0);
          fVar8 = (float)dVar11;
          if ((fVar8 < 0.0) || (1.0 < fVar8)) goto LAB_005f1b6a;
          *(float *)(*in_ECX + (*(int *)(*in_ECX + 0x28) + 3) * 0x10) = fVar8;
          *(undefined4 *)(*in_ECX + 0x2c + *(int *)(*in_ECX + 0x28) * 0x10) = 0xd;
          goto LAB_005f1b65;
        }
      }
      else {
        if (uVar5 == 8) {
          iVar3 = _strncmp("triangle",in_EDX,8);
          if (iVar3 == 0) {
            *(undefined4 *)(*in_ECX + 0x2c + *(int *)(*in_ECX + 0x28) * 0x10) = 0xc;
            goto LAB_005f1b65;
          }
          goto LAB_005f17da;
        }
        if (7 < uVar5) goto LAB_005f17da;
      }
      if ((0xf < uVar5) && (iVar3 = _strncmp("partial_tukey(",in_EDX,0xe), iVar3 == 0)) {
        dVar11 = FID_conflict__strtod((wchar_t *)(in_EDX + 0xe),(wchar_t **)0x0);
        iVar7 = (int)dVar11;
        iVar3 = FUN_004c2420(in_EDX,0x2f);
        if (iVar3 == 0) {
          fVar8 = 0.1;
        }
        else {
          dVar11 = FID_conflict__strtod((wchar_t *)(iVar3 + 1),(wchar_t **)0x0);
          fVar8 = 0.99;
          if ((float)dVar11 <= 0.99) {
            fVar8 = (float)dVar11;
          }
        }
        fVar8 = 1.0 / (1.0 - fVar8) - 1.0;
        if (iVar3 != 0) {
          in_EDX = (char *)(iVar3 + 1);
        }
        iVar3 = FUN_004c2420(in_EDX,0x2f);
        if (iVar3 == 0) {
          fVar10 = 0.2;
        }
        else {
          dVar11 = FID_conflict__strtod((wchar_t *)(iVar3 + 1),(wchar_t **)0x0);
          fVar10 = (float)dVar11;
        }
        if (1 < iVar7) {
          if (((uint)(*(int *)(*in_ECX + 0x28) + iVar7) < 0x20) && (0 < iVar7)) {
            fVar9 = (float)iVar7 + fVar8;
            iVar3 = 0;
            do {
              iVar4 = iVar3 + 1;
              *(float *)(*in_ECX + (*(int *)(*in_ECX + 0x28) + 3) * 0x10) = fVar10;
              *(float *)(*in_ECX + 0x34 + *(int *)(*in_ECX + 0x28) * 0x10) = (float)iVar3 / fVar9;
              *(float *)(*in_ECX + 0x38 + *(int *)(*in_ECX + 0x28) * 0x10) =
                   ((float)iVar4 + fVar8) / fVar9;
              *(undefined4 *)(*in_ECX + 0x2c + *(int *)(*in_ECX + 0x28) * 0x10) = 0xe;
              *(int *)(*in_ECX + 0x28) = *(int *)(*in_ECX + 0x28) + 1;
              iVar3 = iVar4;
            } while (iVar4 < iVar7);
          }
          goto LAB_005f1b6a;
        }
        *(float *)(*in_ECX + (*(int *)(*in_ECX + 0x28) + 3) * 0x10) = fVar10;
        *(undefined4 *)(*in_ECX + 0x2c + *(int *)(*in_ECX + 0x28) * 0x10) = 0xd;
        goto LAB_005f1b65;
      }
      if ((uVar5 < 0x11) || (iVar3 = _strncmp("punchout_tukey(",in_EDX,0xf), iVar3 != 0)) {
        if ((uVar5 == 5) && (iVar3 = _strncmp("welch",in_EDX,5), iVar3 == 0)) {
          *(undefined4 *)(*in_ECX + 0x2c + *(int *)(*in_ECX + 0x28) * 0x10) = 0x10;
          goto LAB_005f1b65;
        }
      }
      else {
        dVar11 = FID_conflict__strtod((wchar_t *)(in_EDX + 0xf),(wchar_t **)0x0);
        iVar7 = (int)dVar11;
        iVar3 = FUN_004c2420(in_EDX,0x2f);
        if (iVar3 == 0) {
          fVar8 = 0.2;
        }
        else {
          dVar11 = FID_conflict__strtod((wchar_t *)(iVar3 + 1),(wchar_t **)0x0);
          fVar8 = 0.99;
          if ((float)dVar11 <= 0.99) {
            fVar8 = (float)dVar11;
          }
        }
        fVar8 = 1.0 / (1.0 - fVar8) - 1.0;
        if (iVar3 != 0) {
          in_EDX = (char *)(iVar3 + 1);
        }
        iVar3 = FUN_004c2420(in_EDX,0x2f);
        if (iVar3 == 0) {
          fVar10 = 0.2;
        }
        else {
          dVar11 = FID_conflict__strtod((wchar_t *)(iVar3 + 1),(wchar_t **)0x0);
          fVar10 = (float)dVar11;
        }
        if (iVar7 < 2) {
          *(float *)(*in_ECX + (*(int *)(*in_ECX + 0x28) + 3) * 0x10) = fVar10;
          *(undefined4 *)(*in_ECX + 0x2c + *(int *)(*in_ECX + 0x28) * 0x10) = 0xd;
          goto LAB_005f1b65;
        }
        if (((uint)(*(int *)(*in_ECX + 0x28) + iVar7) < 0x20) && (0 < iVar7)) {
          fVar9 = (float)iVar7 + fVar8;
          iVar3 = 0;
          do {
            iVar4 = iVar3 + 1;
            *(float *)(*in_ECX + (*(int *)(*in_ECX + 0x28) + 3) * 0x10) = fVar10;
            *(float *)(*in_ECX + 0x34 + *(int *)(*in_ECX + 0x28) * 0x10) = (float)iVar3 / fVar9;
            *(float *)(*in_ECX + 0x38 + *(int *)(*in_ECX + 0x28) * 0x10) =
                 ((float)iVar4 + fVar8) / fVar9;
            *(undefined4 *)(*in_ECX + 0x2c + *(int *)(*in_ECX + 0x28) * 0x10) = 0xf;
            *(int *)(*in_ECX + 0x28) = *(int *)(*in_ECX + 0x28) + 1;
            iVar3 = iVar4;
          } while (iVar4 < iVar7);
        }
      }
    }
    else {
      if (uVar5 == 0x1a) {
        iVar3 = _strncmp("blackman_harris_4term_92db",in_EDX,0x1a);
        if (iVar3 != 0) goto LAB_005f165f;
        *(undefined4 *)(*in_ECX + 0x2c + *(int *)(*in_ECX + 0x28) * 0x10) = 3;
      }
      else {
        if (uVar5 == 6) {
          iVar3 = _strncmp("connes",in_EDX,6);
          if (iVar3 == 0) {
            *(undefined4 *)(*in_ECX + 0x2c + *(int *)(*in_ECX + 0x28) * 0x10) = 4;
            goto LAB_005f1b65;
          }
          goto LAB_005f1b6a;
        }
        if (uVar5 != 7) {
          if (7 < uVar5) goto LAB_005f165f;
          goto LAB_005f16c8;
        }
        iVar3 = _strncmp("flattop",in_EDX,7);
        if (iVar3 == 0) {
          *(undefined4 *)(*in_ECX + 0x2c + *(int *)(*in_ECX + 0x28) * 0x10) = 5;
          goto LAB_005f1b65;
        }
LAB_005f16cd:
        iVar3 = _strncmp("hamming",in_EDX,7);
        if (iVar3 == 0) {
          *(undefined4 *)(*in_ECX + 0x2c + *(int *)(*in_ECX + 0x28) * 0x10) = 7;
        }
        else {
          iVar3 = _strncmp("nuttall",in_EDX,7);
          if (iVar3 != 0) goto LAB_005f1b6a;
          *(undefined4 *)(*in_ECX + 0x2c + *(int *)(*in_ECX + 0x28) * 0x10) = 10;
        }
      }
LAB_005f1b65:
      *(int *)(*in_ECX + 0x28) = *(int *)(*in_ECX + 0x28) + 1;
    }
LAB_005f1b6a:
    iVar3 = *in_ECX;
    if ((*(int *)(iVar3 + 0x28) == 0x20) || (iVar2 == 0)) {
      if (*(int *)(iVar3 + 0x28) == 0) {
        *(undefined4 *)(iVar3 + 0x28) = 1;
        *(undefined4 *)(*in_ECX + 0x2c) = 0xd;
        *(undefined4 *)(*in_ECX + 0x30) = 0x3f000000;
      }
      return 1;
    }
    in_EDX = (char *)(iVar2 + 1);
  } while( true );
}

