// rea decompile_all
// name: FUN_0050e370
// address: 0x50e370
// body: available
// range: 0x50e370-0x50e611 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050e370(char param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined8 in_XMM2_Qa;
  undefined8 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070883d;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined8 *)(in_ECX + 0xa8) = in_XMM2_Qa;
  if ((*(char *)(in_ECX + 0xb4) != '\0') || (param_1 != '\0')) {
    EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x818));
    uVar4 = 0;
    local_8 = 0;
    if (0 < *(int *)(in_ECX + 0x1170)) {
      bVar6 = *(int *)(in_ECX + 0x1170) != 0;
      do {
        if (bVar6) {
          iVar5 = *(int *)(*(int *)(in_ECX + 0x1168) + uVar4 * 4);
        }
        else {
          iVar5 = 0;
        }
        piVar1 = *(int **)(iVar5 + 0xc);
        if (*(code **)(*piVar1 + 0x18) == FUN_005c9cd0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0xd));
          local_8._0_1_ = 1;
          if ((int *)piVar1[0xb] == (int *)0x0) {
            local_8 = (uint)local_8._1_3_ << 8;
            LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0xd));
          }
          else {
            (**(code **)(*(int *)piVar1[0xb] + 0x18))();
            FUN_006f5730();
            FUN_006f55df();
            local_8 = (uint)local_8._1_3_ << 8;
            LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0xd));
          }
        }
        else {
          (**(code **)(*piVar1 + 0x18))(uVar2);
        }
        if (uVar4 < *(uint *)(in_ECX + 0x1170)) {
          iVar5 = *(int *)(*(int *)(in_ECX + 0x1168) + uVar4 * 4);
        }
        else {
          iVar5 = 0;
        }
        if (0.0 < *(double *)(*(int **)(iVar5 + 0xc) + 0x16)) {
          (**(code **)(**(int **)(iVar5 + 0xc) + 0x18))();
          FUN_006f5730();
        }
        FUN_006f5730();
        uVar7 = FUN_006f55df();
        if (uVar4 < *(uint *)(in_ECX + 0x1170)) {
          iVar5 = *(int *)(*(int *)(in_ECX + 0x1168) + uVar4 * 4);
        }
        else {
          iVar5 = 0;
        }
        piVar1 = *(int **)(iVar5 + 0xc);
        if (*(code **)(*piVar1 + 0x10) == FUN_005c9df0) {
          piVar3 = (int *)piVar1[0xb];
          if (piVar3 != (int *)0x0) {
            if ((0.0 < *(double *)(piVar1 + 0x16)) && (0.0 < *(double *)(piVar1 + 0x18))) {
              FUN_006f5730();
              uVar7 = FUN_006f55df();
              piVar3 = (int *)piVar1[0xb];
            }
            (**(code **)(*piVar3 + 0x10))(uVar7);
            iVar5 = piVar1[9];
            if (iVar5 != 0) {
              FUN_004032e0();
              *(undefined4 *)(iVar5 + 0xb8) = 0;
              *(undefined4 *)(iVar5 + 0xbc) = 0;
              *(undefined8 *)(iVar5 + 0xc0) = 0;
              if (*(void **)(iVar5 + 0x108) != (void *)0x0) {
                _memset(*(void **)(iVar5 + 0x108),0,*(int *)(iVar5 + 0xfc) << 5);
              }
            }
            *(undefined1 *)((int)piVar1 + 0x71) = 0;
          }
        }
        else {
          (**(code **)(*piVar1 + 0x10))(uVar7);
        }
        uVar4 = uVar4 + 1;
        bVar6 = uVar4 < *(uint *)(in_ECX + 0x1170);
      } while ((int)uVar4 < (int)*(uint *)(in_ECX + 0x1170));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x818));
  }
  *(undefined1 *)(in_ECX + 0xb4) = 0;
  ExceptionList = local_10;
  return;
}

