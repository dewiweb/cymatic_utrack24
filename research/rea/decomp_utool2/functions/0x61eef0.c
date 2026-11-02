// rea decompile_all
// name: FUN_0061eef0
// address: 0x61eef0
// body: available
// range: 0x61eef0-0x61f106 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061eef0(int param_1)

{
  int *_Memory;
  int iVar1;
  void *_ArgList;
  void **ppvVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uintptr_t uVar6;
  HANDLE hThread;
  int in_ECX;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071d0d8;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_14 = 1;
  ppvVar2 = &local_10;
  local_10 = ExceptionList;
  if (1 < param_1) {
    local_14 = param_1;
  }
  while (ExceptionList = ppvVar2, local_14 = local_14 + -1, -1 < local_14) {
    puVar4 = operator_new(0x48);
    local_8 = 0;
    puVar9 = &DAT_00c17928;
    FUN_0045c990(&DAT_00c17928,uVar3);
    FUN_00630a80(&param_1,puVar9);
    _Memory = (int *)(param_1 + -8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar1 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(_Memory);
      }
    }
    *puVar4 = juce::ThreadPool::ThreadPoolThread::vftable;
    puVar4[0x10] = 0;
    puVar4[0x11] = in_ECX;
    local_8 = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0x14);
    iVar7 = iVar1 + 1;
    if ((int)*(uint *)(in_ECX + 0x10) < iVar7) {
      if (iVar7 < 0) {
        iVar7 = iVar1 + 2;
      }
      uVar8 = iVar1 + 9 + (iVar7 >> 1) & 0xfffffff8;
      if (*(uint *)(in_ECX + 0x10) != uVar8) {
        if ((int)uVar8 < 1) {
          FID_conflict__free(*(void **)(in_ECX + 0xc));
          *(undefined4 *)(in_ECX + 0xc) = 0;
        }
        else if (*(int *)(in_ECX + 0xc) == 0) {
          uVar5 = FUN_004c554b();
          *(undefined4 *)(in_ECX + 0xc) = uVar5;
        }
        else {
          uVar5 = FUN_004c553b(*(int *)(in_ECX + 0xc),uVar8 * 4);
          *(undefined4 *)(in_ECX + 0xc) = uVar5;
        }
        *(uint *)(in_ECX + 0x10) = uVar8;
      }
    }
    iVar1 = *(int *)(in_ECX + 0x14);
    *(int *)(in_ECX + 0x14) = iVar1 + 1;
    *(undefined4 **)(*(int *)(in_ECX + 0xc) + iVar1 * 4) = puVar4;
    ppvVar2 = ExceptionList;
  }
  local_14 = *(int *)(in_ECX + 0x14);
  while (local_14 = local_14 + -1, -1 < local_14) {
    _ArgList = *(void **)(*(int *)(in_ECX + 0xc) + local_14 * 4);
    EnterCriticalSection((LPCRITICAL_SECTION)((int)_ArgList + 0x10));
    *(undefined1 *)((int)_ArgList + 0x3c) = 0;
    if (*(int *)((int)_ArgList + 8) == 0) {
      uVar6 = __beginthreadex((void *)0x0,*(uint *)((int)_ArgList + 0x34),FUN_00611a60,_ArgList,0,
                              &local_18);
      *(uintptr_t *)((int)_ArgList + 8) = uVar6;
      iVar7 = 0xf;
      hThread = *(HANDLE *)((int)_ArgList + 8);
      *(uint *)((int)_ArgList + 0xc) = local_18;
      iVar1 = *(int *)((int)_ArgList + 0x30);
      if (iVar1 < 1) {
        iVar7 = -0xf;
      }
      else if (iVar1 < 2) {
        iVar7 = -2;
      }
      else if (iVar1 < 5) {
        iVar7 = -1;
      }
      else if (iVar1 < 7) {
        iVar7 = 0;
      }
      else if (iVar1 < 9) {
        iVar7 = 1;
      }
      else if (iVar1 < 10) {
        iVar7 = 2;
      }
      if (hThread == (HANDLE)0x0) {
        hThread = GetCurrentThread();
      }
      SetThreadPriority(hThread,iVar7);
      SetEvent(*(HANDLE *)((int)_ArgList + 0x28));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)_ArgList + 0x10));
  }
  ExceptionList = local_10;
  return;
}

