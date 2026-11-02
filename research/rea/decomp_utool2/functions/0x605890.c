// rea decompile_all
// name: FUN_00605890
// address: 0x605890
// body: available
// range: 0x605890-0x6059d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00605890(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined **ppuVar6;
  int iVar7;
  int in_ECX;
  undefined4 extraout_ECX;
  int *piVar8;
  void *local_20 [2];
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071c034;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  FUN_006d17e0(local_20);
  local_8 = 0;
  iVar5 = (**(code **)(*(int *)(in_ECX + 0x134) + 4))(uVar4);
  iVar2 = local_18;
  do {
    do {
      iVar5 = iVar5 + -1;
      if (iVar5 < 0) {
        FID_conflict__free(local_20[0]);
        ExceptionList = local_10;
        return;
      }
      uVar4 = 0;
    } while (iVar2 < 1);
    do {
      if (iVar5 < *(int *)((int)local_20[0] + uVar4 * 4)) {
        if ((uVar4 & 1) == 0) break;
        iVar1 = *(int *)(in_ECX + 0x80);
        if (iVar5 < *(int *)(iVar1 + 0x24)) {
          EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x50));
          FUN_00447650(iVar5,extraout_ECX);
          LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x50));
        }
        else {
          uVar4 = iVar5 - *(int *)(iVar1 + 0x24);
          if (uVar4 < *(uint *)(iVar1 + 0x30)) {
            ppuVar6 = (undefined **)(*(int *)(iVar1 + 0x28) + uVar4 * 4);
          }
          else {
            ppuVar6 = &PTR_DAT_00c7ed68;
          }
          uVar4 = FUN_0062c730(*ppuVar6,0,0);
          in_ECX = local_14;
          iVar2 = local_18;
          if ((int)uVar4 < 0) break;
          if (uVar4 < *(uint *)(iVar1 + 0x30)) {
            FUN_004179e0(uVar4);
          }
        }
        in_ECX = local_14;
        iVar2 = local_18;
        if (0 < *(int *)(iVar1 + 0x18)) {
          piVar8 = (int *)(*(int *)(iVar1 + 8) + 0xc);
          LOCK();
          iVar7 = *piVar8;
          if (iVar7 == 0) {
            *piVar8 = 1;
            iVar7 = 0;
          }
          UNLOCK();
          if ((iVar7 == 0) &&
             (cVar3 = FUN_0063e270(), in_ECX = local_14, iVar2 = local_18, cVar3 == '\0')) {
            LOCK();
            *(undefined4 *)(*(int *)(iVar1 + 8) + 0xc) = 0;
            UNLOCK();
          }
        }
        break;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar2);
  } while( true );
}

