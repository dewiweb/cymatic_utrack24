// rea decompile_all
// name: FUN_005c5e60
// address: 0x5c5e60
// body: available
// range: 0x5c5e60-0x5c5f94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_005c5e60(void)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  char *in_EAX;
  char *pcVar4;
  undefined4 *in_ECX;
  uint in_EDX;
  uint uVar5;
  bool bVar6;
  double in_XMM0_Qa;
  double dVar7;
  
  if ((int)in_EDX < 0) {
    return (char *)-((in_EDX & 0xff) * ((int)in_EDX >> 8));
  }
  uVar5 = 0;
  uVar2 = in_ECX[2];
  if (0 < (int)uVar2) {
    bVar6 = uVar2 != 0;
    do {
      if (bVar6) {
        in_EAX = (char *)*in_ECX;
        pcVar4 = *(char **)(in_EAX + uVar5 * 4);
      }
      else {
        pcVar4 = (char *)0x0;
      }
      dVar7 = *(double *)(pcVar4 + 8);
      if (in_XMM0_Qa <= dVar7) {
        return in_EAX;
      }
      if (4 < *(int *)(pcVar4 + 0x10)) {
        pcVar4 = *(char **)pcVar4;
      }
      in_EAX = pcVar4;
      uVar3 = uVar5;
      if ((pcVar4[1] == 'Q') && (*pcVar4 == -1)) {
        in_EAX = (char *)FUN_005c4e90();
      }
      while (uVar3 = uVar3 + 1, (int)uVar3 < (int)uVar2) {
        if (uVar3 < uVar2) {
          in_EAX = (char *)*in_ECX;
          pcVar4 = *(char **)(in_EAX + uVar3 * 4);
        }
        else {
          pcVar4 = (char *)0x0;
        }
        dVar1 = *(double *)(pcVar4 + 8);
        in_EAX = (char *)(uint)CONCAT11((dVar1 == dVar7) << 6 | (NAN(dVar1) || NAN(dVar7)) << 2 | 2U
                                        | dVar1 < dVar7,(char)in_EAX);
        if (dVar1 != dVar7) break;
        if (4 < *(int *)(pcVar4 + 0x10)) {
          pcVar4 = *(char **)pcVar4;
        }
        if ((pcVar4[1] == 'Q') && (*pcVar4 == -1)) {
          pcVar4 = (char *)FUN_005c4e90();
        }
        uVar5 = uVar5 + 1;
        in_EAX = pcVar4;
      }
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < uVar2;
    } while ((int)uVar5 < (int)uVar2);
  }
  return in_EAX;
}

