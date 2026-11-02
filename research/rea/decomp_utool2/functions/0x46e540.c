// rea decompile_all
// name: FUN_0046e540
// address: 0x46e540
// body: available
// range: 0x46e540-0x46e652 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046e540(uint param_1,int *param_2)

{
  int *piVar1;
  int *in_ECX;
  int iVar2;
  uint uVar3;
  
  iVar2 = in_ECX[2] + 1;
  if ((in_ECX[1] < iVar2) && (uVar3 = in_ECX[2] + 9 + iVar2 / 2 & 0xfffffff8, in_ECX[1] != uVar3)) {
    if ((int)uVar3 < 1) {
      FID_conflict__free((void *)*in_ECX);
      *in_ECX = 0;
    }
    else {
      FUN_00419e50(uVar3,iVar2);
    }
    in_ECX[1] = uVar3;
  }
  uVar3 = in_ECX[2];
  if (param_1 < uVar3) {
    piVar1 = (int *)(*in_ECX + param_1 * 0x1c);
    if (0 < (int)(uVar3 - param_1)) {
      FUN_004c1df0(piVar1 + 7,piVar1,(uVar3 - param_1) * 0x1c);
    }
    if (piVar1 != (int *)0x0) {
      iVar2 = *param_2;
      *piVar1 = iVar2;
      if (iVar2 != 0) {
        LOCK();
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
        UNLOCK();
      }
      piVar1[1] = param_2[1];
      piVar1[2] = param_2[2];
      piVar1[3] = param_2[3];
      piVar1[4] = param_2[4];
      piVar1[5] = param_2[5];
      *(char *)(piVar1 + 6) = (char)param_2[6];
    }
    in_ECX[2] = in_ECX[2] + 1;
    return;
  }
  in_ECX[2] = uVar3 + 1;
  piVar1 = (int *)(*in_ECX + uVar3 * 0x1c);
  if (piVar1 != (int *)0x0) {
    iVar2 = *param_2;
    *piVar1 = iVar2;
    if (iVar2 != 0) {
      LOCK();
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      UNLOCK();
    }
    piVar1[1] = param_2[1];
    piVar1[2] = param_2[2];
    piVar1[3] = param_2[3];
    piVar1[4] = param_2[4];
    piVar1[5] = param_2[5];
    *(char *)(piVar1 + 6) = (char)param_2[6];
  }
  return;
}

