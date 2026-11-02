// rea decompile_all
// name: FUN_0068cb90
// address: 0x68cb90
// body: available
// range: 0x68cb90-0x68ccd9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068cb90(void)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072145b;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  DAT_00c8a9c8 = DAT_00c8a9dc;
  if (DAT_00c8a678 != *(int *)(in_ECX + 4)) {
    iVar5 = DAT_00c8a678;
    if (DAT_00c8a678 == 0) {
      return;
    }
    while (iVar5 = *(int *)(iVar5 + 0xc), iVar5 != *(int *)(in_ECX + 4)) {
      if (iVar5 == 0) {
        return;
      }
    }
  }
  ExceptionList = &local_10;
  if (DAT_00c8a678 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_0040de70(DAT_00c8a678);
  }
  if (*(int *)(in_ECX + 0x20) != iVar5) {
    if (iVar5 != 0) {
      LOCK();
      *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
      UNLOCK();
    }
    puVar1 = *(undefined4 **)(in_ECX + 0x20);
    *(int *)(in_ECX + 0x20) = iVar5;
    if (puVar1 != (undefined4 *)0x0) {
      LOCK();
      piVar6 = puVar1 + 1;
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)*puVar1)(1,uVar4);
      }
    }
  }
  iVar5 = DAT_00c8a67c;
  if ((*(int *)(in_ECX + 0x20) != 0) && (*(int *)(*(int *)(in_ECX + 0x20) + 8) != 0)) {
    DAT_00c8a678 = 0;
    if (DAT_00c8a67c == 0) {
      operator_new(0xd0);
      local_8 = iVar5;
      DAT_00c8a67c = FUN_006cb960();
      local_8 = 0xffffffff;
    }
    iVar2 = DAT_00c8a67c;
    piVar6 = (int *)(*(int *)(DAT_00c8a67c + 0x1c) + 0xc);
    LOCK();
    iVar5 = *piVar6;
    if (iVar5 == 0) {
      *piVar6 = 1;
      iVar5 = 0;
    }
    UNLOCK();
    if ((iVar5 == 0) && (cVar3 = FUN_0063e270(), cVar3 == '\0')) {
      LOCK();
      *(undefined4 *)(*(int *)(iVar2 + 0x1c) + 0xc) = 0;
      UNLOCK();
    }
    FUN_006cc960(0);
  }
  ExceptionList = local_10;
  return;
}

