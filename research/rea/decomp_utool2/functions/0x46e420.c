// rea decompile_all
// name: FUN_0046e420
// address: 0x46e420
// body: available
// range: 0x46e420-0x46e531 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046e420(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *in_ECX;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  param_2 = param_2 + param_1;
  iVar6 = in_ECX[2];
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (iVar6 < param_2) {
    param_2 = iVar6;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (iVar6 < param_1) {
    param_1 = iVar6;
  }
  if (param_1 < param_2) {
    iVar7 = param_2 - param_1;
    piVar2 = (int *)(*in_ECX + param_1 * 0x1c);
    iVar6 = iVar7;
    piVar8 = piVar2;
    if (0 < iVar7) {
      do {
        puVar4 = (undefined4 *)*piVar8;
        if (puVar4 != (undefined4 *)0x0) {
          LOCK();
          piVar1 = puVar4 + 1;
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)*puVar4)(1);
          }
        }
        iVar6 = iVar6 + -1;
        piVar8 = piVar8 + 7;
      } while (iVar6 != 0);
    }
    if (0 < in_ECX[2] - param_2) {
      FUN_004c1df0(piVar2,piVar2 + iVar7 * 7,(in_ECX[2] - param_2) * 0x1c);
    }
    in_ECX[2] = in_ECX[2] - iVar7;
    iVar6 = in_ECX[2];
    iVar7 = in_ECX[1];
    iVar3 = iVar6 * 2;
    iVar5 = 0;
    if (0 < iVar3) {
      iVar5 = iVar3;
    }
    if (iVar5 < iVar7) {
      if (iVar6 < 2) {
        iVar6 = 2;
      }
      if ((iVar6 < iVar7) && (iVar7 != iVar6)) {
        if (0 < iVar6) {
          FUN_00419e50(iVar6,iVar3);
          in_ECX[1] = iVar6;
          return;
        }
        FID_conflict__free((void *)*in_ECX);
        *in_ECX = 0;
        in_ECX[1] = iVar6;
      }
    }
  }
  return;
}

