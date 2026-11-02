// rea decompile_all
// name: FUN_0050e0a0
// address: 0x50e0a0
// body: available
// range: 0x50e0a0-0x50e1aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050e0a0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007087cc;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x818));
  pcVar7 = LeaveCriticalSection_exref;
  local_8 = 0;
  uVar5 = 0;
  *(undefined2 *)(in_ECX + 0xb7) = 1;
  if (0 < *(int *)(in_ECX + 0x1170)) {
    bVar8 = *(int *)(in_ECX + 0x1170) != 0;
    do {
      if (bVar8) {
        iVar6 = *(int *)(*(int *)(in_ECX + 0x1168) + uVar5 * 4);
      }
      else {
        iVar6 = 0;
      }
      iVar6 = *(int *)(iVar6 + 0xc);
      if ((*(char *)(iVar6 + 0x54) == '\0') && (*(int *)(iVar6 + 0x30) != 0)) {
        EnterCriticalSection((LPCRITICAL_SECTION)(iVar6 + 0x34));
        *(undefined1 *)(iVar6 + 0x54) = 1;
        *(undefined1 *)(iVar6 + 0x55) = 0;
        pcVar7 = LeaveCriticalSection_exref;
        *(undefined1 *)(iVar6 + 0x71) = 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)(iVar6 + 0x34));
        if (0 < *(int *)(iVar6 + 0x1c)) {
          piVar4 = (int *)(*(int *)(iVar6 + 0xc) + 0xc);
          LOCK();
          iVar3 = *piVar4;
          if (iVar3 == 0) {
            *piVar4 = 1;
            iVar3 = 0;
          }
          UNLOCK();
          if ((iVar3 == 0) && (cVar1 = FUN_0063e270(uVar2), cVar1 == '\0')) {
            LOCK();
            *(undefined4 *)(*(int *)(iVar6 + 0xc) + 0xc) = 0;
            UNLOCK();
          }
        }
      }
      uVar5 = uVar5 + 1;
      bVar8 = uVar5 < *(uint *)(in_ECX + 0x1170);
    } while ((int)uVar5 < (int)*(uint *)(in_ECX + 0x1170));
  }
  FUN_006e5380(1,0);
  (*pcVar7)(in_ECX + 0x818);
  ExceptionList = local_10;
  return;
}

