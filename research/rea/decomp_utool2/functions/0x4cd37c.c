// rea decompile_all
// name: FUN_004cd37c
// address: 0x4cd37c
// body: available
// range: 0x4cd37c-0x4cd562 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4cd562 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004cd37c(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  int local_8;
  
  local_8 = 0;
  iVar2 = FUN_004d0a9d(&local_8);
  if (iVar2 != 0) {
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  if (local_8 == 0) {
    return 0;
  }
  iVar2 = param_1[5];
  if ((iVar2 != DAT_00c76168) || (iVar2 != DAT_00c76174)) {
    if (DAT_00c89f08 == 0) {
      uVar3 = 3;
      uVar5 = 2;
      uVar6 = 1;
      uVar8 = 0xb;
      if (iVar2 < 0x6b) {
        uVar3 = 4;
        uVar8 = 10;
        uVar5 = 1;
        uVar6 = 5;
      }
      FUN_004cd563(0,1,iVar2,uVar3,uVar5,0,0,2,0,0,0);
      FUN_004cd563(1,1,param_1[5],uVar8,uVar6,0,0,2,0,0,0);
    }
    else {
      if (DAT_00c89fa8 != 0) {
        uVar10 = 0;
        uVar9 = 0;
        uVar11 = DAT_00c89fae;
      }
      else {
        uVar10 = DAT_00c89fac;
        uVar9 = DAT_00c89fae;
        uVar11 = 0;
      }
      FUN_004cd563(0,DAT_00c89fa8 == 0,iVar2,DAT_00c89faa,uVar9,uVar10,uVar11,DAT_00c89fb0,
                   DAT_00c89fb2,DAT_00c89fb4,DAT_00c89fb6);
      if (DAT_00c89f54 != 0) {
        uVar10 = 0;
        uVar9 = 0;
        iVar2 = param_1[5];
        uVar11 = DAT_00c89f5a;
      }
      else {
        iVar2 = param_1[5];
        uVar10 = DAT_00c89f58;
        uVar9 = DAT_00c89f5a;
        uVar11 = 0;
      }
      FUN_004cd563(1,DAT_00c89f54 == 0,iVar2,DAT_00c89f56,uVar9,uVar10,uVar11,DAT_00c89f5c,
                   DAT_00c89f5e,DAT_00c89f60,DAT_00c89f62);
    }
  }
  iVar2 = param_1[7];
  if (DAT_00c7616c < DAT_00c76178) {
    if ((iVar2 < DAT_00c7616c) || (DAT_00c76178 < iVar2)) {
      return 0;
    }
    if ((iVar2 <= DAT_00c7616c) || (DAT_00c76178 <= iVar2)) {
LAB_004cd52a:
      iVar7 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
      if (iVar2 != DAT_00c7616c) {
        return (uint)(iVar7 < DAT_00c7617c);
      }
      return (uint)(DAT_00c76170 <= iVar7);
    }
  }
  else if ((DAT_00c76178 <= iVar2) && (iVar2 <= DAT_00c7616c)) {
    if ((DAT_00c76178 < iVar2) && (iVar2 < DAT_00c7616c)) {
      return 0;
    }
    goto LAB_004cd52a;
  }
  return 1;
}

