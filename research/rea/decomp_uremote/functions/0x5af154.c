// rea decompile_all
// name: _realloc
// address: 0x5af154
// body: available
// range: 0x5af154-0x5af291 inclusive
// range: 0x5af2a1-0x5af36e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _realloc
   
   Library: Visual Studio 2008 Release */

void * __cdecl _realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  DWORD DVar5;
  LPVOID pvVar6;
  int local_24;
  void *local_20;
  
  if (_Memory == (void *)0x0) {
    pvVar1 = _malloc(_NewSize);
    return pvVar1;
  }
  if (_NewSize == 0) {
    _free(_Memory);
    return (void *)0x0;
  }
  if (DAT_0095de2c == 3) {
    do {
      local_20 = (void *)0x0;
      if (0xffffffe0 < _NewSize) goto LAB_005af32d;
      __lock(4);
      local_24 = ___sbh_find_block(_Memory);
      if (local_24 != 0) {
        if (_NewSize <= DAT_0095de1c) {
          iVar2 = ___sbh_resize_block(local_24,_Memory,_NewSize);
          if (iVar2 == 0) {
            local_20 = (void *)___sbh_alloc_block(_NewSize);
            if (local_20 != (void *)0x0) {
              uVar3 = *(int *)((int)_Memory + -4) - 1;
              if (_NewSize <= uVar3) {
                uVar3 = _NewSize;
              }
              _memcpy(local_20,_Memory,uVar3);
              local_24 = ___sbh_find_block(_Memory);
              ___sbh_free_block(local_24,_Memory);
            }
          }
          else {
            local_20 = _Memory;
          }
        }
        if (local_20 == (void *)0x0) {
          if (_NewSize == 0) {
            _NewSize = 1;
          }
          _NewSize = _NewSize + 0xf & 0xfffffff0;
          local_20 = HeapAlloc(DAT_0095cd74,0,_NewSize);
          if (local_20 != (LPVOID)0x0) {
            uVar3 = *(int *)((int)_Memory + -4) - 1;
            if (_NewSize <= uVar3) {
              uVar3 = _NewSize;
            }
            _memcpy(local_20,_Memory,uVar3);
            ___sbh_free_block(local_24,_Memory);
          }
        }
      }
      FUN_005af298();
      if (local_24 == 0) {
        if (_NewSize == 0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
        local_20 = HeapReAlloc(DAT_0095cd74,0,_Memory,_NewSize);
      }
      if (local_20 != (void *)0x0) {
        return local_20;
      }
      if (DAT_0095d218 == 0) {
        piVar4 = __errno();
        if (local_24 != 0) {
          *piVar4 = 0xc;
          return (void *)0x0;
        }
        goto LAB_005af35a;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    piVar4 = __errno();
    if (local_24 != 0) goto LAB_005af339;
  }
  else {
    do {
      if (0xffffffe0 < _NewSize) goto LAB_005af32d;
      if (_NewSize == 0) {
        _NewSize = 1;
      }
      pvVar6 = HeapReAlloc(DAT_0095cd74,0,_Memory,_NewSize);
      if (pvVar6 != (LPVOID)0x0) {
        return pvVar6;
      }
      if (DAT_0095d218 == 0) {
        piVar4 = __errno();
LAB_005af35a:
        DVar5 = GetLastError();
        iVar2 = __get_errno_from_oserr(DVar5);
        *piVar4 = iVar2;
        return (void *)0x0;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    piVar4 = __errno();
  }
  DVar5 = GetLastError();
  iVar2 = __get_errno_from_oserr(DVar5);
  *piVar4 = iVar2;
  return (void *)0x0;
LAB_005af32d:
  __callnewh(_NewSize);
  piVar4 = __errno();
LAB_005af339:
  *piVar4 = 0xc;
  return (void *)0x0;
}

