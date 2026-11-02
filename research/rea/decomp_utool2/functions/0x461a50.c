// rea decompile_all
// name: FUN_00461a50
// address: 0x461a50
// body: available
// range: 0x461a50-0x461b98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00461a50(void)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  undefined4 *puVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00700c58;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar5 = *(int *)(in_ECX + 0x20);
  if (0 < iVar5) {
    do {
      uVar1 = iVar5 - 1;
      if (uVar1 < *(uint *)(in_ECX + 0x20)) {
        puVar7 = *(undefined4 **)(*(int *)(in_ECX + 0x18) + uVar1 * 4);
      }
      else {
        puVar7 = (undefined4 *)0x0;
      }
      if (puVar7 != (undefined4 *)0x0) {
        LOCK();
        puVar7[1] = puVar7[1] + 1;
        UNLOCK();
      }
      local_8 = 0;
      if (puVar7 != (undefined4 *)0x0) {
        if (uVar1 < *(uint *)(in_ECX + 0x20)) {
          iVar5 = *(int *)(in_ECX + 0x18);
          puVar3 = *(undefined4 **)(iVar5 + uVar1 * 4);
          iVar5 = iVar5 + uVar1 * 4;
          if (puVar3 != (undefined4 *)0x0) {
            LOCK();
            piVar2 = puVar3 + 1;
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)*puVar3)(1,uVar4);
            }
          }
          *(int *)(in_ECX + 0x20) = *(int *)(in_ECX + 0x20) + -1;
          iVar6 = *(int *)(in_ECX + 0x20) - uVar1;
          if (0 < iVar6) {
            FUN_004c1df0(iVar5,iVar5 + 4,iVar6 * 4);
          }
          iVar5 = *(int *)(in_ECX + 0x20);
          if ((iVar5 * 2 < *(int *)(in_ECX + 0x1c)) && (iVar5 < *(int *)(in_ECX + 0x1c))) {
            FUN_00409cf0(iVar5);
          }
        }
        puVar7[0xc] = 0;
        LOCK();
        puVar7[1] = puVar7[1] + 1;
        UNLOCK();
        FUN_00461210(uVar1,puVar7,0,0,0);
        FUN_00461340();
      }
      local_8 = 0xffffffff;
      if (puVar7 != (undefined4 *)0x0) {
        LOCK();
        piVar2 = puVar7 + 1;
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)*puVar7)(1);
        }
      }
      iVar5 = *(int *)(in_ECX + 0x20);
    } while (0 < iVar5);
  }
  ExceptionList = local_10;
  return;
}

