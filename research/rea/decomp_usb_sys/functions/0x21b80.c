// rea decompile_all
// name: FUN_00021b80
// address: 0x21b80
// body: available
// range: 0x21b80-0x21d73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_00021b80(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  byte bVar3;
  char cVar4;
  undefined8 *puVar5;
  byte bVar6;
  uint uVar7;
  
  if (param_3 < 0xc) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  }
  else if (*(uint *)(param_1 + 0x7c) < param_3) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  }
  else {
    uVar1 = *(uint *)(param_2 + 4);
    if ((uVar1 & 0xff00c0) == 0) {
      uVar7 = uVar1 >> 8 & 0xff;
      if (uVar7 == 0) {
        uVar7 = 0x100;
      }
      cVar4 = (char)(uVar1 >> 0x18);
      *(char *)(param_1 + 0x87) = cVar4;
      *(uint *)(param_1 + 0x24) = uVar7;
      uVar1 = *(uint *)(param_2 + 8);
      if ((char)uVar1 == -0x70) {
        *(uint *)(DAT_00029268 + 0x604) = uVar1 >> 0x10;
        bVar6 = (byte)(uVar1 >> 8);
        bVar3 = bVar6 & 7;
        *(uint *)(param_1 + 0x2c) = (uint)bVar3;
        if ((uVar1 >> 8 & 0xf8) != 0) {
          if (bVar6 == 0xff) {
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            return 0;
          }
          *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
          return 0;
        }
        if (bVar3 != *(byte *)(param_1 + 0x84)) {
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
          return 0;
        }
        if (*(char *)(param_1 + 0x85) != cVar4) {
          if (*(char *)(param_1 + 0x86) == '\0') {
            *(undefined1 *)(param_1 + 0x86) = 1;
          }
          else {
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
          }
          *(char *)(param_1 + 0x85) = cVar4;
        }
        uVar2 = (ulonglong)(param_3 - 0xc) / (ulonglong)(uVar7 << 2);
        if ((int)uVar2 != 0) {
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
          *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
          *(undefined4 *)(param_1 + 0xa4) = 0;
          if ((0x50 < *(uint *)(param_1 + 0xa8)) &&
             (*(undefined4 *)(param_1 + 0xa8) = 0, *(int *)(param_1 + 0xa0) == 0)) {
            *(undefined4 *)(param_1 + 0xa0) = 1;
          }
          *(char *)(param_1 + 0x85) = *(char *)(param_1 + 0x85) + (char)uVar2;
          if (uVar7 == *(uint *)(param_1 + 0x80)) {
            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (int)uVar2;
            if (*(char *)(param_1 + 0x78) != '\0') {
              for (puVar5 = *(undefined8 **)(param_1 + 0x88);
                  puVar5 != (undefined8 *)(param_1 + 0x88); puVar5 = (undefined8 *)*puVar5) {
                (*(code *)puVar5[4])(puVar5,param_2 + 0xc,uVar2,uVar7);
              }
              return uVar2;
            }
            return uVar2;
          }
          *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
          return uVar2;
        }
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
        if (*(uint *)(param_1 + 0xa4) < 3) {
          return uVar2;
        }
        *(undefined4 *)(param_1 + 0xa4) = 0;
        *(undefined4 *)(param_1 + 0xa8) = 0;
        if (*(int *)(param_1 + 0xa0) == 1) {
          *(undefined4 *)(param_1 + 0xa0) = 2;
          return uVar2;
        }
        return uVar2;
      }
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  }
  return 0;
}

