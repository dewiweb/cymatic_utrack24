// rea decompile_all
// name: FUN_0058e1a0
// address: 0x58e1a0
// body: available
// range: 0x58e1a0-0x58e309 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0058e1a0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007140a5;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x68));
  uVar5 = 0;
  local_8 = 0;
  uVar6 = *(uint *)(in_ECX + 0x88);
  if (0 < (int)uVar6) {
    do {
      if (uVar5 < uVar6) {
        iVar4 = *(int *)(*(int *)(in_ECX + 0x80) + uVar5 * 4);
      }
      else {
        iVar4 = 0;
      }
      if (*(int *)(iVar4 + 4) == param_1) {
        if (uVar5 < uVar6) {
          puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x80) + uVar5 * 4);
        }
        else {
          puVar2 = (undefined4 *)0x0;
        }
        goto LAB_0058e2eb;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar6);
  }
  puVar2 = operator_new(0x2c);
  *puVar2 = *(undefined4 *)(in_ECX + 0x10);
  puVar2[1] = param_1;
  puVar2[2] = &DAT_00bfe12c;
  puVar2[3] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 4));
  puVar2[10] = 0;
  iVar4 = *(int *)(in_ECX + 0x88) + 1;
  if ((*(int *)(in_ECX + 0x84) < iVar4) &&
     (uVar6 = *(int *)(in_ECX + 0x88) + 9 + iVar4 / 2 & 0xfffffff8,
     *(uint *)(in_ECX + 0x84) != uVar6)) {
    if ((int)uVar6 < 1) {
      FID_conflict__free(*(void **)(in_ECX + 0x80));
      *(undefined4 *)(in_ECX + 0x80) = 0;
    }
    else if (*(int *)(in_ECX + 0x80) == 0) {
      uVar3 = FUN_004c554b();
      *(undefined4 *)(in_ECX + 0x80) = uVar3;
    }
    else {
      uVar3 = FUN_004c553b(*(int *)(in_ECX + 0x80),uVar6 * 4,uVar1);
      *(undefined4 *)(in_ECX + 0x80) = uVar3;
    }
    *(uint *)(in_ECX + 0x84) = uVar6;
  }
  iVar4 = *(int *)(in_ECX + 0x88);
  *(int *)(in_ECX + 0x88) = iVar4 + 1;
  *(undefined4 **)(*(int *)(in_ECX + 0x80) + iVar4 * 4) = puVar2;
LAB_0058e2eb:
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x68));
  ExceptionList = local_10;
  return puVar2;
}

