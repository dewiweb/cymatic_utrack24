// rea decompile_all
// name: FUN_006cc500
// address: 0x6cc500
// body: available
// range: 0x6cc500-0x6cc623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x006cc608) */

void FUN_006cc500(undefined4 param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007265a8;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  cVar1 = FUN_006e6420(uVar2);
  if (cVar1 != '\0') {
    piVar3 = DAT_00c8a678;
    if (((*(byte *)(in_ECX + 0x1a) & 0x20) != 0) &&
       ((((*(byte *)((int)in_ECX + 0x69) & 0x10) == 0 &&
         ((in_ECX[3] == 0 || (cVar1 = FUN_006e6320(), cVar1 != '\0')))) ||
        (piVar3 = DAT_00c8a678, in_ECX[3] == 0)))) {
      FUN_006cc630(param_1);
      ExceptionList = local_10;
      return;
    }
    do {
      if (piVar3 == (int *)0x0) goto LAB_006cc597;
      piVar3 = (int *)piVar3[3];
    } while (piVar3 != in_ECX);
    cVar1 = FUN_006e6420(uVar2);
    if (cVar1 == '\0') {
LAB_006cc597:
      piVar3 = (int *)(**(code **)(*in_ECX + 0x50))();
      local_8 = 0;
      if (piVar3 != (int *)0x0) {
        iVar4 = (**(code **)(*piVar3 + 0xc))();
        if (piVar3 != (int *)0x0) {
          (**(code **)*piVar3)(1);
        }
        if (iVar4 != 0) {
          FUN_006cc500(param_1,0);
          ExceptionList = local_10;
          return;
        }
      }
      if ((param_2 != '\0') && (in_ECX[3] != 0)) {
        FUN_006cc500(param_1,1);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

