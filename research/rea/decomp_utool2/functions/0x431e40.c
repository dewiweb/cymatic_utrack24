// rea decompile_all
// name: FUN_00431e40
// address: 0x431e40
// body: available
// range: 0x431e40-0x431ffe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00431e40(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  int in_ECX;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fdda8;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *(int *)(in_ECX + 0x728);
  iVar2 = *(int *)(in_ECX + 0x70c);
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x6f4));
  local_8 = 0;
  if (-1 < iVar1) {
    iVar3 = *(int *)(in_ECX + 0x6a0);
    if (*(int *)(in_ECX + 0x6f0) == 0) {
      iVar7 = 0;
      if (0 < *(int *)(in_ECX + 0x730)) {
        iVar6 = 0;
        do {
          _Dst = *(void **)(iVar2 + 8 + (iVar1 + (*(int *)(in_ECX + 0x72c) + iVar7) * 4) * 4);
          if (_Dst != (void *)0x0) {
            _memset(_Dst,0,*(int *)(*(int *)(in_ECX + 0x71c) + 4 + iVar6) * iVar3);
          }
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 0xc;
        } while (iVar7 < *(int *)(in_ECX + 0x730));
      }
    }
    else {
      iVar7 = 0;
      if (0 < *(int *)(in_ECX + 0x72c)) {
        puVar5 = (undefined4 *)(iVar2 + iVar1 * 4 + 8);
        do {
          FUN_0042e780(*puVar5,*(undefined4 *)(*(int *)(in_ECX + 0x710) + iVar7 * 4),iVar3);
          iVar7 = iVar7 + 1;
          puVar5 = puVar5 + 4;
        } while (iVar7 < *(int *)(in_ECX + 0x72c));
      }
      (**(code **)(**(int **)(in_ECX + 0x6f0) + 4))
                (*(undefined4 *)(in_ECX + 0x710),*(undefined4 *)(in_ECX + 0x72c),
                 *(undefined4 *)(in_ECX + 0x714),*(undefined4 *)(in_ECX + 0x730),iVar3,uVar4);
      iVar7 = 0;
      if (0 < *(int *)(in_ECX + 0x730)) {
        do {
          FUN_0042e810(*(undefined4 *)(*(int *)(in_ECX + 0x714) + iVar7 * 4),
                       *(undefined4 *)
                        (iVar2 + 8 + (iVar1 + (*(int *)(in_ECX + 0x72c) + iVar7) * 4) * 4),iVar3);
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(in_ECX + 0x730));
      }
    }
  }
  if (*(char *)(in_ECX + 0x739) != '\0') {
    (**(code **)(**(int **)(in_ECX + 0x24) + 0x5c))();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x6f4));
  ExceptionList = local_10;
  return;
}

