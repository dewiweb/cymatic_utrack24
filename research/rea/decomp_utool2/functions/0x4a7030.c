// rea decompile_all
// name: FUN_004a7030
// address: 0x4a7030
// body: available
// range: 0x4a7030-0x4a7156 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004a7030(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  LONG LVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fcdb6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar4 = FUN_0048c530(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  iVar9 = 0;
  iVar8 = 0;
  if (0 < *(int *)(iVar4 + 0x14)) {
    iVar10 = iVar9;
    do {
      iVar1 = iVar8 * 4;
      iVar8 = iVar8 + 1;
      iVar9 = iVar10 + 1;
      if (*(char *)(*(int *)(*(int *)(iVar4 + 0xc) + iVar1) + 0x40) == '\0') {
        iVar9 = iVar10;
      }
      iVar10 = iVar9;
    } while (iVar8 < *(int *)(iVar4 + 0x14));
  }
  local_8 = 0xffffffff;
  if (iVar9 != 0) {
    LVar5 = GetWindowLongW((HWND)*param_1,-0x15);
    iVar9 = FUN_00462d70();
    if (LVar5 != iVar9) {
      uVar2 = param_1[1];
      if (0x200 < uVar2) {
        if (0x319 < uVar2) {
          ExceptionList = local_10;
          return 0;
        }
        if (uVar2 != 0x319) {
          switch(uVar2) {
          case 0x201:
          case 0x203:
          case 0x204:
          case 0x206:
          case 0x207:
          case 0x209:
            goto switchD_004a70cc_caseD_a1;
          case 0x202:
          case 0x205:
          case 0x208:
          case 0x20a:
          case 0x20e:
          case 0x240:
          case 0x2a0:
          case 0x2a1:
            break;
          default:
            goto switchD_004a70cc_caseD_22;
          }
        }
        goto switchD_004a70cc_caseD_21;
      }
      if (uVar2 == 0x200) {
switchD_004a70cc_caseD_21:
        uVar7 = FUN_004a6e50();
        ExceptionList = local_10;
        return uVar7;
      }
      switch(uVar2) {
      case 0x21:
      case 0xa0:
      case 0x101:
      case 0x102:
      case 0x105:
        goto switchD_004a70cc_caseD_21;
      default:
        break;
      case 0xa1:
      case 0xa3:
      case 0xa4:
      case 0xa6:
      case 0xa7:
      case 0xa9:
      case 0x100:
      case 0x104:
switchD_004a70cc_caseD_a1:
        cVar3 = FUN_004a6e50();
        if (cVar3 != '\0') {
          piVar6 = (int *)FUN_006cecc0();
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 0xa0))();
          }
          ExceptionList = local_10;
          return 1;
        }
      }
    }
  }
switchD_004a70cc_caseD_22:
  ExceptionList = local_10;
  return 0;
}

