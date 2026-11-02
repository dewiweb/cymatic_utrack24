// rea decompile_all
// name: FUN_00497810
// address: 0x497810
// body: available
// range: 0x497810-0x497946 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00497810(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702798;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (in_ECX == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)FUN_0040de70(in_ECX);
  }
  if (puVar5 != (undefined4 *)0x0) {
    LOCK();
    puVar5[1] = puVar5[1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  iVar2 = *(int *)(in_ECX + 0x100);
  local_14 = puVar5;
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      cVar3 = FUN_00497c80();
      if (cVar3 != '\0') break;
      if ((*(int *)(in_ECX + 0xac) != 0) && (*(int *)(*(int *)(in_ECX + 0xac) + 8) != 0)) {
        FUN_006cbf50(&local_20);
        cVar3 = FUN_006d01e0(local_20,local_1c,1);
        if (cVar3 != '\0') {
          FUN_006cddc0(0x6287345f);
          break;
        }
      }
      if (*(int *)(in_ECX + 0x70) == 0) {
        FUN_004973b0(0,0);
      }
      else {
        FUN_004974d0(0);
      }
      break;
    }
    (**(code **)(**(int **)(*(int *)(in_ECX + 0xf8) + iVar2 * 4) + 4))(uVar4);
    if (puVar5 == (undefined4 *)0x0) {
      ExceptionList = local_10;
      return;
    }
  } while (puVar5[2] != 0);
  if (puVar5 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar5 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar5)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

