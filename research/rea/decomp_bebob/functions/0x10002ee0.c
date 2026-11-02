// rea decompile_all
// name: FUN_10002ee0
// address: 0x10002ee0
// body: available
// range: 0x10002ee0-0x1000306c inclusive
// range: 0x10003070-0x100030f3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall FUN_10002ee0(void *this,char param_1,uint param_2)

{
  char cVar1;
  LPCSTR pCVar2;
  DWORD DVar3;
  DWORD DVar4;
  uint uVar5;
  LPCSTR pCVar6;
  LPWSTR pWVar7;
  LPCWSTR pWVar8;
  HANDLE pvVar9;
  
  if (*(int *)((int)this + 0x20) == -1) {
    return -0x1fffffed;
  }
  DVar3 = GetTickCount();
  CloseHandle(*(HANDLE *)((int)this + 0x20));
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  if (param_1 != '\0') {
    if ((*(HANDLE *)((int)this + 0x78) == (HANDLE)0x0) || (*(int *)((int)this + 0x7c) == 0)) {
      (**(code **)(*(int *)this + 0xc))();
      return -0x1fffffee;
    }
    DVar4 = WaitForSingleObject(*(HANDLE *)((int)this + 0x78),-(uint)(param_2 != 0) & param_2);
    if (DVar4 == 0) {
      DVar4 = GetTickCount();
      if (DVar4 < DVar3) {
        uVar5 = (DVar4 - DVar3) - 1;
      }
      else {
        uVar5 = DVar4 - DVar3;
      }
      if (uVar5 < param_2) {
        DVar4 = param_2 - uVar5;
      }
      else {
        DVar4 = 0;
      }
      DVar4 = WaitForSingleObject(*(HANDLE *)((int)this + 0x7c),DVar4);
      if (DVar4 == 0) goto LAB_10002fbb;
      (**(code **)(*(int *)this + 0xc))();
    }
    else {
      (**(code **)(*(int *)this + 0xc))();
    }
    return (uint)(DVar4 == 0x102) * 4 + -0x1fffffff;
  }
LAB_10002fbb:
  pCVar2 = *(LPCSTR *)(*(int *)((int)this + 0x74) + 4);
  pCVar6 = pCVar2;
  do {
    cVar1 = *pCVar6;
    pCVar6 = pCVar6 + 1;
  } while (cVar1 != '\0');
  pWVar7 = _calloc((size_t)(pCVar6 + (1 - (int)(pCVar2 + 1))),2);
  MultiByteToWideChar(0,1,pCVar2,-1,pWVar7,(int)(pCVar6 + (1 - (int)(pCVar2 + 1))));
  pWVar8 = (LPCWSTR)Ordinal_2(pWVar7);
  _free(pWVar7);
  pvVar9 = CreateFileW(pWVar8,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000000,(HANDLE)0x0);
  *(HANDLE *)((int)this + 0x20) = pvVar9;
  while( true ) {
    if (pvVar9 != (HANDLE)0xffffffff) {
      return 0;
    }
    DVar4 = GetTickCount();
    if (DVar4 < DVar3) {
      uVar5 = (DVar4 - DVar3) - 1;
    }
    else {
      uVar5 = DVar4 - DVar3;
    }
    if ((param_2 <= uVar5) || (param_2 == uVar5)) break;
    Sleep(100);
    pCVar2 = *(LPCSTR *)(*(int *)((int)this + 0x74) + 4);
    pCVar6 = pCVar2;
    do {
      cVar1 = *pCVar6;
      pCVar6 = pCVar6 + 1;
    } while (cVar1 != '\0');
    pWVar7 = _calloc((size_t)(pCVar6 + (1 - (int)(pCVar2 + 1))),2);
    MultiByteToWideChar(0,1,pCVar2,-1,pWVar7,(int)(pCVar6 + (1 - (int)(pCVar2 + 1))));
    pWVar8 = (LPCWSTR)Ordinal_2(pWVar7);
    _free(pWVar7);
    pvVar9 = CreateFileW(pWVar8,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000000,(HANDLE)0x0);
    *(HANDLE *)((int)this + 0x20) = pvVar9;
  }
  (**(code **)(*(int *)this + 0xc))();
  return -0x1ffffffb;
}

