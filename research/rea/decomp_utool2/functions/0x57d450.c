// rea decompile_all
// name: FUN_0057d450
// address: 0x57d450
// body: available
// range: 0x57d450-0x57d69e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057d450(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  
  DAT_00c8a5d0 = 0;
  puVar3 = (undefined4 *)in_ECX[0x35];
  *in_ECX = MyLookAndFeel::vftable;
  in_ECX[1] = MyLookAndFeel::vftable;
  in_ECX[2] = MyLookAndFeel::vftable;
  in_ECX[3] = MyLookAndFeel::vftable;
  in_ECX[4] = MyLookAndFeel::vftable;
  in_ECX[5] = MyLookAndFeel::vftable;
  in_ECX[6] = MyLookAndFeel::vftable;
  in_ECX[7] = MyLookAndFeel::vftable;
  in_ECX[8] = MyLookAndFeel::vftable;
  in_ECX[9] = MyLookAndFeel::vftable;
  in_ECX[10] = MyLookAndFeel::vftable;
  in_ECX[0xb] = MyLookAndFeel::vftable;
  in_ECX[0xc] = MyLookAndFeel::vftable;
  in_ECX[0xd] = MyLookAndFeel::vftable;
  in_ECX[0xe] = MyLookAndFeel::vftable;
  in_ECX[0xf] = MyLookAndFeel::vftable;
  in_ECX[0x10] = MyLookAndFeel::vftable;
  in_ECX[0x11] = MyLookAndFeel::vftable;
  in_ECX[0x12] = MyLookAndFeel::vftable;
  in_ECX[0x13] = MyLookAndFeel::vftable;
  in_ECX[0x14] = MyLookAndFeel::vftable;
  in_ECX[0x15] = MyLookAndFeel::vftable;
  in_ECX[0x16] = MyLookAndFeel::vftable;
  in_ECX[0x17] = MyLookAndFeel::vftable;
  in_ECX[0x18] = MyLookAndFeel::vftable;
  in_ECX[0x19] = MyLookAndFeel::vftable;
  in_ECX[0x1a] = MyLookAndFeel::vftable;
  in_ECX[0x1b] = MyLookAndFeel::vftable;
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  puVar3 = (undefined4 *)in_ECX[0x34];
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  puVar3 = (undefined4 *)in_ECX[0x33];
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  puVar3 = (undefined4 *)in_ECX[0x32];
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  puVar3 = (undefined4 *)in_ECX[0x31];
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  puVar3 = (undefined4 *)in_ECX[0x30];
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  puVar3 = (undefined4 *)in_ECX[0x2f];
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  puVar3 = (undefined4 *)in_ECX[0x2e];
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  puVar3 = (undefined4 *)in_ECX[0x2d];
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  puVar3 = (undefined4 *)in_ECX[0x2c];
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  puVar3 = (undefined4 *)in_ECX[0x2b];
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  puVar3 = (undefined4 *)in_ECX[0x2a];
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  puVar3 = (undefined4 *)in_ECX[0x29];
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  puVar3 = (undefined4 *)in_ECX[0x28];
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  FUN_006d73b0();
  return;
}

