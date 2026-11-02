// rea decompile_all
// name: FUN_00658a20
// address: 0x658a20
// body: available
// range: 0x658a20-0x658c9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00658a20(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int *in_EDX;
  int iVar4;
  float10 fVar5;
  
  iVar2 = *in_EDX;
  iVar4 = in_EDX[2] + iVar2 + in_EDX[1];
  if (iVar4 != 0) {
    if (iVar2 == 0) {
      *in_ECX = 0;
    }
    else {
      fVar5 = (float10)FUN_006f9790(((double)iVar2 * 100000.0) / (double)iVar4 + 0.5);
      if (2147483647.0 < (double)fVar5) {
        return true;
      }
      if ((double)fVar5 < -2147483648.0) {
        return true;
      }
      *in_ECX = (int)fVar5;
    }
    if (in_EDX[1] == 0) {
      in_ECX[1] = 0;
    }
    else {
      fVar5 = (float10)FUN_006f9790(((double)in_EDX[1] * 100000.0) / (double)iVar4 + 0.5);
      if (2147483647.0 < (double)fVar5) {
        return true;
      }
      if ((double)fVar5 < -2147483648.0) {
        return true;
      }
      in_ECX[1] = (int)fVar5;
    }
    iVar2 = in_EDX[3];
    iVar1 = in_EDX[5] + in_EDX[4] + iVar2;
    if (iVar1 != 0) {
      if (iVar2 == 0) {
        in_ECX[2] = 0;
      }
      else {
        fVar5 = (float10)FUN_006f9790(((double)iVar2 * 100000.0) / (double)iVar1 + 0.5);
        if (2147483647.0 < (double)fVar5) {
          return true;
        }
        if ((double)fVar5 < -2147483648.0) {
          return true;
        }
        in_ECX[2] = (int)fVar5;
      }
      iVar2 = FUN_006571e0(100000,iVar1);
      if (iVar2 != 0) {
        iVar2 = in_EDX[8] + in_EDX[6] + in_EDX[7];
        if ((((iVar2 != 0) && (iVar3 = FUN_006571e0(100000,iVar2), iVar3 != 0)) &&
            (iVar3 = FUN_006571e0(100000,iVar2), iVar3 != 0)) &&
           ((iVar2 = iVar4 + iVar1 + iVar2, iVar2 != 0 &&
            (iVar4 = FUN_006571e0(100000,iVar2), iVar4 != 0)))) {
          iVar2 = FUN_006571e0(100000,iVar2);
          return iVar2 == 0;
        }
      }
    }
  }
  return true;
}

