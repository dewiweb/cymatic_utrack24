// rea decompile_all
// name: FUN_005caef0
// address: 0x5caef0
// body: available
// range: 0x5caef0-0x5cafc1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005caef0(int param_1,int param_2,int param_3)

{
  double dVar1;
  int *in_ECX;
  int iVar2;
  int extraout_ECX;
  int iVar3;
  int extraout_EDX;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  
  LOCK();
  iVar3 = *in_ECX;
  *in_ECX = *in_ECX;
  UNLOCK();
  if ((iVar3 == 0) || (param_2 < 1)) {
    in_ECX[2] = 0;
    in_ECX[3] = 0;
  }
  else {
    iVar3 = 0;
    if (0 < param_3) {
      uVar6 = 0;
      uVar7 = 0;
      dVar8 = 0.0010000000474974513;
      dVar9 = 0.99992;
      fVar10 = (float)param_2;
      do {
        iVar2 = 0;
        fVar5 = 0.0;
        if (0 < param_2) {
          do {
            fVar4 = *(float *)(*(int *)(param_1 + iVar2 * 4) + iVar3 * 4);
            FUN_00411660();
            iVar2 = extraout_ECX + 1;
            fVar5 = fVar5 + fVar4;
            iVar3 = extraout_EDX;
          } while (iVar2 < param_2);
        }
        dVar1 = *(double *)(in_ECX + 2);
        if ((double)(fVar5 / fVar10) <= dVar1) {
          if (dVar1 <= dVar8) {
            *(ulonglong *)(in_ECX + 2) = CONCAT44(uVar7,uVar6);
          }
          else {
            *(double *)(in_ECX + 2) = dVar1 * dVar9;
          }
        }
        else {
          *(double *)(in_ECX + 2) = (double)(fVar5 / fVar10);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_3);
      return;
    }
  }
  return;
}

