// rea decompile_all
// name: __chsize_nolock
// address: 0x4e4bb8
// body: available
// range: 0x4e4bb8-0x4e4d48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __chsize_nolock
   
   Library: Visual Studio 2015 Release */

int __cdecl __chsize_nolock(int _FileHandle,longlong _Size)

{
  int iVar1;
  int *piVar2;
  void *_Buf;
  int iVar3;
  ulong *puVar4;
  HANDLE hFile;
  BOOL BVar5;
  DWORD DVar6;
  int unaff_EBX;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int unaff_EDI;
  ulonglong uVar10;
  longlong lVar11;
  uint in_stack_00000008;
  int local_8;
  
  uVar10 = __lseeki64_nolock(_FileHandle,0x100000000,unaff_EDI);
  if (uVar10 == 0xffffffffffffffff) {
LAB_004e4be3:
    piVar2 = __errno();
    return *piVar2;
  }
  lVar11 = __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  iVar3 = (int)((ulonglong)lVar11 >> 0x20);
  if (lVar11 == -1) goto LAB_004e4be3;
  uVar7 = in_stack_00000008 - (uint)lVar11;
  uVar8 = (uint)(in_stack_00000008 < (uint)lVar11);
  iVar1 = (int)_Size - iVar3;
  local_8 = iVar1 - uVar8;
  if ((local_8 < 0) ||
     ((local_8 == 0 || SBORROW4((int)_Size,iVar3) != SBORROW4(iVar1,uVar8) && (uVar7 == 0)))) {
    if ((local_8 < 1) && (local_8 < 0)) {
      lVar11 = __lseeki64_nolock(_FileHandle,_Size & 0xffffffff,unaff_EBX);
      if (lVar11 == -1) goto LAB_004e4cc1;
      hFile = (HANDLE)__get_osfhandle(_FileHandle);
      BVar5 = SetEndOfFile(hFile);
      if (BVar5 == 0) {
        piVar2 = __errno();
        *piVar2 = 0xd;
        puVar4 = ___doserrno();
        DVar6 = GetLastError();
        *puVar4 = DVar6;
        goto LAB_004e4cc1;
      }
    }
  }
  else {
    _Buf = (void *)__calloc_base(0x1000,1);
    if (_Buf == (void *)0x0) {
      piVar2 = __errno();
      *piVar2 = 0xc;
LAB_004e4cdf:
      piVar2 = __errno();
      iVar3 = *piVar2;
      FID_conflict__free(_Buf);
      return iVar3;
    }
    iVar3 = __setmode_nolock(_FileHandle,0x8000);
    do {
      uVar8 = uVar7;
      if (local_8 < 0) goto LAB_004e4c71;
      uVar9 = uVar7;
      if ((local_8 < 1) && (uVar7 < 0x1000)) goto LAB_004e4c71;
      do {
        uVar7 = 0x1000;
        uVar8 = uVar9;
LAB_004e4c71:
        uVar7 = __write_nolock(_FileHandle,_Buf,uVar7);
        if (uVar7 == 0xffffffff) {
          puVar4 = ___doserrno();
          if (*puVar4 == 5) {
            piVar2 = __errno();
            *piVar2 = 0xd;
          }
          goto LAB_004e4cdf;
        }
        uVar9 = uVar8 - uVar7;
        local_8 = (local_8 - ((int)uVar7 >> 0x1f)) - (uint)(uVar8 < uVar7);
      } while (0 < local_8);
    } while ((-1 < local_8) && (uVar7 = uVar9, uVar9 != 0));
    __setmode_nolock(_FileHandle,iVar3);
    FID_conflict__free(_Buf);
  }
  lVar11 = __lseeki64_nolock(_FileHandle,uVar10 >> 0x20,unaff_EBX);
  if (lVar11 != -1) {
    return 0;
  }
LAB_004e4cc1:
  piVar2 = __errno();
  return *piVar2;
}

