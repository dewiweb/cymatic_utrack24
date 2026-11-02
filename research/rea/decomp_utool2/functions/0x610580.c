// rea decompile_all
// name: FUN_00610580
// address: 0x610580
// body: available
// range: 0x610580-0x6106dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00610580(void)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 in_ECX;
  undefined4 *in_EDX;
  uint uVar5;
  uint uVar6;
  void *local_30;
  int local_2c;
  uint local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071c7e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = FUN_0045d1e0(*in_EDX,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  FUN_0045d730(*in_EDX,uVar2);
  local_8 = 0;
  uVar5 = 0;
  uVar6 = local_28;
  if (0 < (int)local_28) {
    do {
      bVar1 = *(byte *)((int)local_30 + uVar5);
      puVar4 = (undefined1 *)((int)local_30 + uVar5);
      if (((((char)bVar1 < 'a') || ('z' < (char)bVar1)) &&
          (((char)bVar1 < 'A' || ('Z' < (char)bVar1)))) && (9 < (byte)(bVar1 - 0x30))) {
        iVar3 = FUN_0045c230("_-.*!\'()");
        if (iVar3 < 0) {
          if (uVar5 < uVar6) {
LAB_0061066f:
            *puVar4 = 0x25;
          }
          else if (-1 < (int)uVar5) {
            iVar3 = uVar6 + 1;
            if (local_2c < iVar3) {
              if (iVar3 < 0) {
                iVar3 = uVar6 + 2;
              }
              FUN_00412690((iVar3 >> 1) + uVar6 + 9 & 0xfffffff8);
              uVar6 = local_28;
            }
            local_28 = uVar6 + 1;
            puVar4 = (undefined1 *)(uVar6 + (int)local_30);
            if (puVar4 != (undefined1 *)0x0) goto LAB_0061066f;
          }
          FUN_00458780(uVar5 + 1,"0123456789ABCDEF"[bVar1 >> 4]);
          uVar5 = uVar5 + 2;
          FUN_00458780(uVar5,"0123456789ABCDEF"[(int)(char)bVar1 & 0xf]);
          uVar6 = local_28;
        }
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar6);
  }
  FUN_0062bed0(uVar6);
  FID_conflict__free(local_30);
  ExceptionList = local_10;
  return in_ECX;
}

