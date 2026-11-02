// rea decompile_all
// name: FUN_006302c0
// address: 0x6302c0
// body: available
// range: 0x6302c0-0x630649 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006302c0(void)

{
  char cVar1;
  uint uVar2;
  HANDLE pvVar3;
  undefined4 *_Memory;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 local_8dc;
  int local_8d4;
  int local_8d0;
  int local_8cc;
  int local_8c8;
  undefined4 local_8c4;
  int *local_8c0;
  uint local_8bc;
  int *local_8b8;
  int local_8b4;
  HANDLE local_8b0;
  int *local_8ac;
  int *local_8a8;
  undefined4 local_8a4 [9];
  undefined1 local_880 [1644];
  int local_214 [128];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071e52a;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = (int)&DAT_00bfe12c;
  local_8c4 = 1;
  local_8c0 = in_ECX;
  local_8a8 = in_ECX;
  local_14 = uVar2;
  pvVar3 = GetCurrentProcess();
  local_8b0 = pvVar3;
  SymInitialize(pvVar3,0,1,uVar2);
  local_8bc = RtlCaptureStackBackTrace(0,0x80,local_214,0);
  local_8bc = local_8bc & 0xffff;
  local_8 = 1;
  FID_conflict__free((void *)0x0);
  _Memory = (undefined4 *)FUN_004c5556(0x158,1);
  local_8b4 = 0;
  _Memory[0x14] = 0xff;
  *_Memory = 0x58;
  if (local_8bc != 0) {
    do {
      local_8dc = 0;
      iVar4 = SymFromAddr(pvVar3,local_214[local_8b4],local_214[local_8b4] >> 0x1f,&local_8dc,
                          _Memory);
      if (iVar4 != 0) {
        local_8ac = (int *)FUN_0045d120();
        pcVar7 = (char *)*local_8ac;
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_00455850(pcVar7);
        *local_8ac = local_8c8;
        pcVar6 = pcVar6 + (local_8c8 - (int)(pcVar7 + 1));
        pcVar6[0] = ':';
        pcVar6[1] = ' ';
        pcVar6[2] = '\0';
        _memset(local_8a4,0,0x690);
        local_8a4[0] = 0x690;
        iVar4 = SymGetModuleInfo64(local_8b0,_Memory[8],_Memory[9],local_8a4);
        piVar5 = local_8a8;
        if (iVar4 != 0) {
          FUN_00621830(local_880);
          FUN_00621830(&DAT_00c0116c);
        }
        local_8b8 = (int *)FUN_0062de00((undefined4)local_8dc,local_8dc._4_4_);
        local_8._0_1_ = 2;
        pcVar6 = (char *)(_Memory + 0x15);
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        local_8ac = (int *)((int)pcVar6 - ((int)_Memory + 0x55));
        if (0 < (int)local_8ac) {
          pcVar6 = (char *)*piVar5;
          pcVar7 = pcVar6;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          FUN_00455850(pcVar6);
          iVar4 = local_8cc - (int)(pcVar6 + 1);
          *local_8a8 = local_8cc;
          FUN_004c2c30(pcVar7 + iVar4,_Memory + 0x15,local_8ac);
          (pcVar7 + iVar4)[(int)local_8ac] = '\0';
        }
        pcVar6 = (char *)*local_8a8;
        pcVar7 = pcVar6;
        do {
          pcVar8 = pcVar7;
          pcVar7 = pcVar8 + 1;
        } while (*pcVar8 != '\0');
        FUN_00455850(pcVar6);
        *local_8a8 = local_8d0;
        builtin_strncpy(pcVar8 + (local_8d0 - (int)(pcVar6 + 1)) + 1," + 0x",6);
        local_8b8 = (int *)FUN_00636ec0(local_8b8);
        pcVar7 = (char *)*local_8b8;
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_00455850(pcVar7);
        *local_8b8 = local_8d4;
        pcVar6 = pcVar6 + (local_8d4 - (int)(pcVar7 + 1));
        pcVar6[0] = '\r';
        pcVar6[1] = '\n';
        pcVar6[2] = '\0';
        local_8 = CONCAT31(local_8._1_3_,1);
        piVar5 = local_8c0 + -2;
        pvVar3 = local_8b0;
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar5);
            pvVar3 = local_8b0;
          }
        }
      }
      local_8b4 = local_8b4 + 1;
    } while (local_8b4 < (int)local_8bc);
  }
  FID_conflict__free(_Memory);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

