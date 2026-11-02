// rea decompile_all
// name: FUN_0064e6f0
// address: 0x64e6f0
// body: available
// range: 0x64e6f0-0x64e9bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64e9b8 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064e6f0(int param_1)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  void *_Memory;
  int in_ECX;
  char *pcVar16;
  int in_EDX;
  char *pcVar17;
  char *pcVar18;
  
  uVar13 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if ((*(uint *)(in_ECX + 0x28) & 1) == 0) {
LAB_0064e9b8:
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  if ((*(uint *)(in_ECX + 0x28) & 4) != 0) {
    FUN_00650a40();
    if ((*(uint *)(in_ECX + 0x2c) & 0x100000) != 0) {
      pcVar18 = "out of place";
LAB_0064e73b:
      FUN_00656080(pcVar18);
      FUN_006563b0();
      __security_check_cookie(uVar13 ^ (uint)&stack0xfffffffc);
      return;
    }
    goto LAB_0064e9b8;
  }
  if ((in_EDX == 0) || ((*(uint *)(in_EDX + 8) & 0x400) == 0)) {
    pcVar18 = (char *)FUN_00650920(2);
    if (pcVar18 == (char *)0x0) {
      FUN_00650a40();
    }
    else {
      FUN_00650b50(param_1);
      iVar14 = FUN_00650a40();
      if (iVar14 != 0) goto LAB_0064e9a7;
      pcVar1 = pcVar18 + param_1;
      *pcVar1 = '\0';
      cVar2 = *pcVar18;
      pcVar16 = pcVar18;
      while (cVar2 != '\0') {
        pcVar16 = pcVar16 + 1;
        cVar2 = *pcVar16;
      }
      if (pcVar16 + 0xc < pcVar1) {
        cVar2 = pcVar16[1];
        cVar3 = pcVar16[2];
        cVar4 = pcVar16[3];
        cVar5 = pcVar16[4];
        cVar6 = pcVar16[5];
        cVar7 = pcVar16[6];
        cVar8 = pcVar16[7];
        cVar9 = pcVar16[8];
        bVar10 = pcVar16[10];
        bVar11 = pcVar16[9];
        pcVar16 = pcVar16 + 0xb;
        if (bVar11 == 0) {
          if (bVar10 != 2) goto LAB_0064e9a0;
        }
        else if ((bVar11 == 1) || (bVar11 == 2)) {
          if (bVar10 != 3) goto LAB_0064e9a0;
        }
        else if (bVar11 == 3) {
          if (bVar10 != 4) goto LAB_0064e9a0;
        }
        else if (3 < bVar11) {
          FUN_00655fd0();
        }
        cVar12 = *pcVar16;
        pcVar17 = pcVar16;
        while (cVar12 != '\0') {
          pcVar17 = pcVar17 + 1;
          cVar12 = *pcVar17;
        }
        uVar15 = (uint)bVar10;
        if ((uVar15 != 0) && (_Memory = (void *)FUN_004c554b(uVar15 << 2), _Memory != (void *)0x0))
        {
          iVar14 = 0;
          if (uVar15 != 0) {
            do {
              pcVar17 = pcVar17 + 1;
              *(char **)((int)_Memory + iVar14 * 4) = pcVar17;
              while( true ) {
                if (pcVar1 < pcVar17) {
                  FID_conflict__free(_Memory);
                  if ((*(uint *)(in_ECX + 0x2c) & 0x100000) == 0) goto LAB_0064e9b8;
                  pcVar18 = "invalid data";
                  goto LAB_0064e73b;
                }
                if (*pcVar17 == '\0') break;
                pcVar17 = pcVar17 + 1;
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 < (int)uVar15);
          }
          FUN_0064c2e0(pcVar18,CONCAT31(CONCAT21(CONCAT11(cVar2,cVar3),cVar4),cVar5),
                       CONCAT31(CONCAT21(CONCAT11(cVar6,cVar7),cVar8),cVar9),bVar11,uVar15,pcVar16,
                       _Memory);
          FID_conflict__free(_Memory);
          __security_check_cookie(uVar13 ^ (uint)&stack0xfffffffc);
          return;
        }
        FUN_006563b0();
      }
    }
  }
  else {
    FUN_00650a40();
  }
LAB_0064e9a0:
  FUN_00655fd0();
LAB_0064e9a7:
  __security_check_cookie(uVar13 ^ (uint)&stack0xfffffffc);
  return;
}

