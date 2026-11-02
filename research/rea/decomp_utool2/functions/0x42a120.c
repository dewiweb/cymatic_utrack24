// rea decompile_all
// name: FUN_0042a120
// address: 0x42a120
// body: available
// range: 0x42a120-0x42a47c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0042a120(int *param_1,undefined4 param_2,undefined4 param_3,double param_4,int param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  int *piVar5;
  int *piStack_28;
  int *piStack_24;
  int *piStack_20;
  
  (**(code **)(*in_ECX + 0x1c))();
  piVar5 = in_ECX + 0x17;
  piVar4 = (int *)(in_ECX[0x17] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  *piVar5 = (int)&DAT_00bfe12c;
  if (((in_ECX[0x24] == 0) && (in_ECX[0x18] != 0)) && (in_ECX[0x19] != 0)) {
    piVar4 = (int *)FUN_00637250();
    iVar3 = *piVar5;
    *piVar5 = *piVar4;
    *piVar4 = iVar3;
LAB_0042a198:
    piVar4 = piStack_28 + -2;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  else {
    if (param_5 < 1) {
      iVar3 = in_ECX[0x1f];
    }
    else {
      iVar3 = param_5;
      if (param_5 < in_ECX[0x1e]) {
        iVar3 = in_ECX[0x1e];
      }
    }
    in_ECX[0x29] = iVar3;
    if (param_4 <= 0.0) {
      param_4 = *(double *)(in_ECX + 0x1c);
    }
    *(double *)(in_ECX + 0x2a) = param_4;
    FUN_006374e0(param_2);
    FUN_006374e0(param_3);
    iVar3 = in_ECX[0x18];
    if (iVar3 != 0) {
      cVar2 = FUN_004280e0(param_2,param_5);
      if (cVar2 == '\0') {
LAB_0042a27e:
        piVar4 = (int *)FUN_00637250();
        iVar3 = *piVar5;
        *piVar5 = *piVar4;
        *piVar4 = iVar3;
        piStack_28 = piStack_24;
        goto LAB_0042a198;
      }
      if (*(int *)(iVar3 + 0x20) != 0) {
        piStack_24 = *(int **)(iVar3 + 0xc);
        piVar4 = (int *)(iVar3 + 0x90);
        piVar1 = (int *)*piVar4;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        *piVar4 = 0;
        iVar3 = (**(code **)(*piStack_24 + 0x38))(piStack_24,&DAT_00c14320,piVar4);
        if (iVar3 < 0) goto LAB_0042a27e;
      }
    }
    if (in_ECX[0x19] != 0) {
      cVar2 = FUN_004290e0(param_3,param_5);
      if (cVar2 == '\0') {
        (**(code **)(*in_ECX + 0x1c))();
        piVar4 = (int *)FUN_00637250();
        iVar3 = *piVar5;
        *piVar5 = *piVar4;
        *piVar4 = iVar3;
        piStack_28 = piStack_20;
        goto LAB_0042a198;
      }
    }
    if ((char)in_ECX[0x1a] != '\0') {
      iVar3 = in_ECX[0x18];
      if (((iVar3 != 0) && (in_ECX[0x19] != 0)) &&
         (*(int *)(iVar3 + 0x78) != *(int *)(in_ECX[0x19] + 0x78))) {
        (**(code **)(*in_ECX + 0x1c))();
        piVar4 = (int *)FUN_00637250();
        iVar3 = *piVar5;
        *piVar5 = *piVar4;
        *piVar4 = iVar3;
        FUN_00637c10();
        FUN_00637c50(piVar5);
        return param_1;
      }
      if (in_ECX[0x19] == 0) {
        iVar3 = *(int *)(iVar3 + 0x78);
      }
      else {
        iVar3 = *(int *)(in_ECX[0x19] + 0x78);
      }
      in_ECX[0x29] = iVar3;
    }
    if (in_ECX[0x18] != 0) {
      ResetEvent(*(HANDLE *)(in_ECX[0x18] + 0x48));
    }
    if (in_ECX[0x19] != 0) {
      ResetEvent(*(HANDLE *)(in_ECX[0x19] + 0x48));
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 7));
    if (in_ECX[5] == 0) {
      in_ECX[0xf] = 8;
      FUN_00630990();
    }
    else {
      FUN_0062de30(8);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 7));
    if (DAT_00c8a8f0 == (HANDLE)0x0) {
      Sleep(5);
    }
    else {
      WaitForSingleObject(DAT_00c8a8f0,5);
    }
    iVar3 = in_ECX[0x18];
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0xc) != 0)) {
      in_ECX[0x20] = *(int *)(iVar3 + 0x30) + in_ECX[0x29];
      cVar2 = FUN_00428ba0(in_ECX[0x29]);
      if (cVar2 == '\0') {
        (**(code **)(*in_ECX + 0x1c))();
        piVar4 = (int *)FUN_00637250();
        iVar3 = *piVar5;
        *piVar5 = *piVar4;
        *piVar4 = iVar3;
        FUN_00637c10();
        goto LAB_0042a45f;
      }
    }
    iVar3 = in_ECX[0x19];
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0xc) != 0)) {
      in_ECX[0x21] = *(int *)(iVar3 + 0x30) + in_ECX[0x29];
      cVar2 = FUN_00429210();
      if (cVar2 == '\0') {
        (**(code **)(*in_ECX + 0x1c))();
        piVar4 = (int *)FUN_00637250();
        iVar3 = *piVar5;
        *piVar5 = *piVar4;
        *piVar4 = iVar3;
        FUN_00637c10();
        goto LAB_0042a45f;
      }
    }
    *(undefined1 *)(in_ECX + 0x28) = 1;
  }
LAB_0042a45f:
  iVar3 = *piVar5;
  *param_1 = iVar3;
  piVar5 = (int *)(iVar3 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  return param_1;
}

