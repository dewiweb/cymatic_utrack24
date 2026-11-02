// rea decompile_all
// name: FUN_004f4990
// address: 0x4f4990
// body: available
// range: 0x4f4990-0x4f4bd9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f4990(undefined4 *param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 *puVar2;
  int iVar4;
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  int *piVar3;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00706039;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00684c50();
  FUN_0057f480();
  local_8 = 0;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  (**(code **)(*(int *)*param_1 + 0x68))();
  local_8 = 0xffffffff;
  if (local_18 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = local_18 + 1;
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      uStack_68 = 0x4f4a23;
      (**(code **)*local_18)();
    }
  }
  iVar4 = 0;
  if (0 < *(int *)(in_ECX + 0x88c)) {
    do {
      if (iVar4 == 2) {
        uStack_68 = 0x4f4a4b;
        FUN_00684c50();
        uStack_68 = 0x4f4a5c;
        FUN_0045c990();
        local_8 = 1;
        if (*(uint *)(in_ECX + 0x88c) < 3) {
          uStack_68 = 0;
        }
        else {
          uStack_68 = *(undefined4 *)(*(int *)(in_ECX + 0x884) + 8);
        }
        uStack_6c = 0x2a;
        uStack_70 = 0x4f4a8b;
        FUN_00472d90();
        uStack_68 = 0x24;
        FUN_0040e4d0(auStack_78);
        FUN_006830c0(&local_14);
        puVar2 = local_14;
LAB_004f4b42:
        local_8 = 0xffffffff;
        piVar3 = puVar2 + -2;
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            uStack_68 = 0x4f4b60;
            FID_conflict__free(piVar3);
          }
        }
      }
      else if (iVar4 == 3) {
        uStack_68 = 0x4f4ad6;
        FUN_00684c50();
        uStack_68 = 0x4f4ae7;
        FUN_0045c990();
        local_8 = 2;
        if (*(uint *)(in_ECX + 0x88c) < 4) {
          uStack_68 = 0;
        }
        else {
          uStack_68 = *(undefined4 *)(*(int *)(in_ECX + 0x884) + 0xc);
        }
        uStack_6c = 0x2a;
        uStack_70 = 0x4f4b16;
        FUN_00472d90();
        uStack_68 = 0x24;
        FUN_0040e4d0(auStack_78);
        FUN_006830c0(&local_18);
        puVar2 = local_18;
        goto LAB_004f4b42;
      }
      uStack_68 = 0x4f4b8c;
      FUN_00684c50();
      uStack_68 = 0x4f4bb9;
      (**(code **)(*(int *)*param_1 + 0x50))();
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(in_ECX + 0x88c));
  }
  ExceptionList = local_10;
  return;
}

