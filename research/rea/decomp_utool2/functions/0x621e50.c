// rea decompile_all
// name: FUN_00621e50
// address: 0x621e50
// body: available
// range: 0x621e50-0x621fd9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00621f0e) */

char * FUN_00621e50(int param_1,int *param_2,double param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char *in_ECX;
  int in_EDX;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071d336;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (((param_1 - 1U < 6) && (-1e+20 < param_3)) && (param_3 < 1e+20)) {
    if (param_1 != 2) {
      FUN_006f8700(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    }
    FUN_00413660();
    lVar4 = FUN_006f55df();
    pcVar3 = in_ECX + in_EDX + -1;
    *pcVar3 = '\0';
    while ((-1 < param_1 || (0 < lVar4))) {
      if (param_1 == 0) {
        pcVar3 = pcVar3 + -1;
        *pcVar3 = '.';
      }
      pcVar3 = pcVar3 + -1;
      lVar5 = __alldiv(lVar4,10,0);
      param_1 = param_1 + -1;
      *pcVar3 = (char)lVar4 + (char)lVar5 * -10 + '0';
      lVar4 = lVar5;
    }
    if (param_3 < 0.0) {
      pcVar3 = pcVar3 + -1;
      *pcVar3 = '-';
    }
    *param_2 = (int)(in_ECX + (in_EDX - (int)pcVar3) + -1);
    ExceptionList = local_10;
    return pcVar3;
  }
  FUN_00455910(in_ECX);
  iVar1 = FUN_004559e0(param_1);
  *param_2 = iVar1;
  if (local_1c != 0) {
    local_8 = 0;
    if ((*(int **)(local_1c + 4) != (int *)0x0) &&
       (puVar2 = (undefined4 *)(**(code **)(**(int **)(local_1c + 4) + 8))(),
       puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    FUN_004bfe14(local_1c,8);
  }
  ExceptionList = local_10;
  return in_ECX;
}

