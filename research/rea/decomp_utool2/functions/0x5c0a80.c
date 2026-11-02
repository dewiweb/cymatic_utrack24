// rea decompile_all
// name: FUN_005c0a80
// address: 0x5c0a80
// body: available
// range: 0x5c0a80-0x5c0b28 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005c0a80(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  iVar3 = (**(code **)(**(int **)(in_ECX + 4) + 4))(param_1,param_2);
  iVar1 = *(int *)(in_ECX + 0x14);
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return iVar3;
    }
    piVar2 = *(int **)(*(int *)(in_ECX + 0xc) + iVar1 * 4);
    LOCK();
    iVar3 = *piVar2;
    if (iVar3 == 0) {
      *piVar2 = 1;
      iVar3 = 0;
    }
    UNLOCK();
    if (iVar3 != 0) {
      iVar3 = 0x13;
      do {
        LOCK();
        iVar4 = *piVar2;
        if (iVar4 == 0) {
          *piVar2 = 1;
          iVar4 = 0;
        }
        UNLOCK();
        if (iVar4 == 0) goto LAB_005c0b06;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
      LOCK();
      iVar3 = *piVar2;
      if (iVar3 == 0) {
        *piVar2 = 1;
        iVar3 = 0;
      }
      UNLOCK();
      while (iVar3 != 0) {
        Sleep(0);
        LOCK();
        iVar3 = *piVar2;
        if (iVar3 == 0) {
          *piVar2 = 1;
          iVar3 = 0;
        }
        UNLOCK();
      }
    }
LAB_005c0b06:
    piVar2[7] = 0;
    piVar2[6] = 0;
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = 0;
    UNLOCK();
  } while( true );
}

