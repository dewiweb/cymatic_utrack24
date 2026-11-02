// rea decompile_all
// name: FUN_0067cf20
// address: 0x67cf20
// body: available
// range: 0x67cf20-0x67d045 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067cf20(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 *in_ECX;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00720857;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar6 = (int *)*in_ECX;
  local_24 = in_ECX[4] + -1;
  if (-1 < local_24) {
    cVar3 = (char)param_1;
    uVar4 = param_1._3_1_;
    do {
      iVar9 = *piVar6;
      if (0 < iVar9) {
        piVar7 = piVar6 + 1;
        param_1 = CONCAT31(param_1._1_3_,uVar4);
        piVar1 = piVar7 + iVar9 * 2;
        FUN_0048b5a0(iVar9,&param_1,uVar5);
        uVar8 = 0;
        piVar2 = piVar7;
        while (piVar2 < piVar1) {
          uVar8 = uVar8 + piVar2[1];
          param_1 = *piVar2;
          while ((piVar2 = piVar2 + 2, piVar2 < piVar1 && (*piVar2 == param_1))) {
            uVar8 = uVar8 + piVar2[1];
            iVar9 = iVar9 + -1;
          }
          uVar10 = (uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f);
          uVar11 = uVar10;
          if ((uVar10 & 0xffffff00) != 0) {
            if (cVar3 == '\0') {
              uVar11 = uVar10 & 0x1ff;
              if ((uVar10 & 0x100) != 0) {
                uVar11 = 0x1ff - uVar11;
              }
            }
            else {
              uVar11 = 0xff;
            }
          }
          *piVar7 = param_1;
          piVar7[1] = uVar11;
          piVar7 = piVar7 + 2;
        }
        *piVar6 = iVar9;
        piVar7[-1] = 0;
      }
      local_24 = local_24 + -1;
      piVar6 = piVar6 + in_ECX[6];
    } while (-1 < local_24);
  }
  ExceptionList = local_10;
  return;
}

