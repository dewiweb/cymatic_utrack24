// rea decompile_all
// name: FUN_00406900
// address: 0x406900
// body: available
// range: 0x406900-0x406c08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00406900(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 double param_5)

{
  int *_Memory;
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *in_ECX;
  double dVar9;
  
  in_ECX[1] = param_1;
  *in_ECX = r8b::CDSPBlockConvolver::vftable;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[5] = param_2;
  in_ECX[6] = param_3;
  *(undefined1 *)(in_ECX + 7) = 1;
  in_ECX[8] = 2 << ((byte)*(undefined4 *)(in_ECX[1] + 0x44) & 0x1f);
  in_ECX[0x13] = 0;
  iVar8 = in_ECX[5];
  if (iVar8 >> 0x10 == 0) {
    if (iVar8 >> 8 == 0) {
      param_1 = (int)(char)(&DAT_00c06db8)[iVar8];
    }
    else {
      param_1 = (char)(&DAT_00c06db8)[iVar8 >> 8] + 8;
    }
  }
  else if (iVar8 >> 0x18 == 0) {
    param_1 = (char)(&DAT_00c06db8)[iVar8 >> 0x10] + 0x10;
  }
  else {
    param_1 = (char)(&DAT_00c06db8)[iVar8 >> 0x18 & 0xff] + 0x18;
  }
  iVar3 = in_ECX[1];
  param_1 = param_1 + -1;
  in_ECX[0x10] = param_1;
  if (1 << ((byte)param_1 & 0x1f) == iVar8) {
    param_1 = *(int *)(iVar3 + 0x44) - param_1;
    iVar2 = (*(int *)(iVar3 + 0x40) + -1) / iVar8;
    in_ECX[10] = iVar2;
    in_ECX[0xb] = in_ECX[8] - iVar2 * iVar8;
  }
  else {
    in_ECX[0x10] = 0xffffffff;
    param_1 = *(int *)(iVar3 + 0x44);
    iVar2 = *(int *)(iVar3 + 0x40) + -1;
    in_ECX[10] = iVar2;
    in_ECX[0xb] = in_ECX[8] - iVar2;
  }
  in_ECX[9] = *(undefined4 *)(iVar3 + 0x34);
  dVar9 = (double)iVar8 * param_5 + *(double *)(iVar3 + 0x38);
  iVar8 = in_ECX[6];
  in_ECX[0x12] = 0;
  in_ECX[0x1a] = 0;
  iVar3 = (int)dVar9;
  in_ECX[0x1c] = 0;
  *(double *)(in_ECX + 0xe) = dVar9;
  in_ECX[0xc] = iVar3;
  in_ECX[0xc] = in_ECX[0xc] + in_ECX[9] + in_ECX[0xb];
  *(double *)(in_ECX + 0xe) = (*(double *)(in_ECX + 0xe) - (double)iVar3) / (double)iVar8;
  if (iVar8 >> 0x10 == 0) {
    if (iVar8 >> 8 == 0) {
      iVar3 = (int)(char)(&DAT_00c06db8)[iVar8];
    }
    else {
      iVar3 = (char)(&DAT_00c06db8)[iVar8 >> 8] + 8;
    }
  }
  else if (iVar8 >> 0x18 == 0) {
    iVar3 = (char)(&DAT_00c06db8)[iVar8 >> 0x10] + 0x10;
  }
  else {
    iVar3 = (char)(&DAT_00c06db8)[iVar8 >> 0x18 & 0xff] + 0x18;
  }
  iVar3 = iVar3 + -1;
  in_ECX[0x11] = iVar3;
  if (1 << ((byte)iVar3 & 0x1f) == iVar8) {
    iVar3 = (*(int *)(in_ECX[1] + 0x44) - iVar3) + 1;
    if ((iVar8 < 2) || (0 < (int)in_ECX[0x10])) goto LAB_00406b15;
    uVar4 = iVar8 - 1U & in_ECX[0xc];
    if (0 < (int)uVar4) {
      iVar2 = iVar8 - uVar4;
      in_ECX[0xc] = in_ECX[0xc] + iVar2;
      if (iVar2 < (int)in_ECX[5]) {
        in_ECX[0x1a] = iVar2;
      }
      else {
        iVar5 = in_ECX[5] + -1;
        in_ECX[0x1a] = iVar5;
        in_ECX[0x12] = iVar2 - iVar5;
      }
    }
    if (*(char *)(in_ECX + 7) != '\0') goto LAB_00406b15;
  }
  else {
    iVar3 = *(int *)(in_ECX[1] + 0x44) + 1;
    in_ECX[0x11] = 0xffffffff;
    if ((*(char *)(in_ECX + 7) != '\0') || (iVar8 < 2)) goto LAB_00406b15;
    in_ECX[0x1c] = (int)in_ECX[0xc] % iVar8;
  }
  in_ECX[0xc] = (int)in_ECX[0xc] / iVar8;
LAB_00406b15:
  puVar6 = (undefined4 *)FUN_004c554b(4);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    uVar7 = FUN_00405af0(param_1 + 1);
    *puVar6 = uVar7;
  }
  _Memory = (int *)in_ECX[2];
  in_ECX[2] = 0;
  if (_Memory != (int *)0x0) {
    piVar1 = (int *)*_Memory;
    if (piVar1 != (int *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a7cc);
      piVar1[4] = *(int *)(&DAT_00c8a7e8 + *piVar1 * 4);
      *(int **)(&DAT_00c8a7e8 + *piVar1 * 4) = piVar1;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a7cc);
    }
    FID_conflict__free(_Memory);
  }
  in_ECX[2] = puVar6;
  if (iVar3 != param_1 + 1) {
    puVar6 = (undefined4 *)FUN_004c554b(4);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      uVar7 = FUN_00405af0(iVar3);
      *puVar6 = uVar7;
    }
    FUN_00408740(puVar6);
    puVar6 = (undefined4 *)in_ECX[3];
  }
  iVar8 = in_ECX[8];
  in_ECX[4] = puVar6;
  iVar3 = in_ECX[10];
  FID_conflict__free((void *)in_ECX[0x13]);
  iVar8 = FUN_004c554b((iVar3 + iVar8 * 2) * 8);
  in_ECX[0x13] = iVar8;
  in_ECX[0x15] = iVar8;
  in_ECX[0x16] = iVar8 + in_ECX[8] * 8;
  in_ECX[0x14] = in_ECX[8] * 0x10 + iVar8;
  FUN_00406d30();
  return;
}

